// rea decompile_all
// name: FUN_005c33c0
// address: 0x5c33c0
// body: available
// range: 0x5c33c0-0x5c3554 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c33c0(uint param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  short local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_28;
  LPCRITICAL_SECTION local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071a8e2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  cVar3 = FUN_005c2a60(param_1);
  if (cVar3 != '\0') {
    cVar3 = *(char *)(param_1 + 0xbb + in_ECX);
    puVar4 = (undefined4 *)FUN_005c3110(local_18,param_1,in_ECX + 0x16c);
    uVar1 = *puVar4;
    puVar4 = (undefined4 *)FUN_005c3110(local_1c,param_1,in_ECX + 0x124);
    uVar2 = *puVar4;
    puVar4 = (undefined4 *)FUN_005c3110(&local_20,param_1,local_14 + 0xdc);
    local_48 = (short)(param_1 << 7) + (short)param_2;
    local_40 = *puVar4;
    local_20 = (LPCRITICAL_SECTION)(local_14 + 4);
    local_45 = (undefined1)param_2;
    local_46 = (undefined1)param_1;
    local_44 = param_3;
    local_34 = 0;
    local_3c = uVar2;
    local_38 = uVar1;
    local_28 = (uint)(cVar3 != '\0') * 2 + 1;
    EnterCriticalSection(local_20);
    local_8 = 0;
    FUN_005c2d40(&local_48);
    iVar5 = 0;
    if (0 < *(int *)(local_14 + 0x24)) {
      iVar6 = *(int *)(local_14 + 0x1c);
      do {
        if ((*(byte *)(iVar6 + 2) == param_1) && (*(byte *)(iVar6 + 3) == param_2)) {
          *(undefined4 *)(iVar6 + 0x20) = 0;
          *(undefined4 *)(iVar6 + 0x14) = 0x2000;
          FUN_00425dd0(&LAB_00426f22,iVar6);
          FUN_00425ad0((iVar6 - *(int *)(local_14 + 0x1c)) / 0x28);
          break;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x28;
      } while (iVar5 < *(int *)(local_14 + 0x24));
    }
    FUN_004255b0(&local_48);
    FUN_00425dd0(FUN_00410536,&local_48);
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_14 + 4));
  }
  ExceptionList = local_10;
  return;
}

