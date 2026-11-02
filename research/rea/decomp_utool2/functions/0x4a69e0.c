// rea decompile_all
// name: FUN_004a69e0
// address: 0x4a69e0
// body: available
// range: 0x4a69e0-0x4a6b14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004a69e0(char param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fcdb6;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar5 = (param_1 != '\0') + 1;
  if (*(int *)(in_ECX + 0x14) != 0) {
    iVar4 = 0;
    if (*(int *)(in_ECX + 0x14) != 0) {
      iVar4 = *(int *)(*(int *)(in_ECX + 0x14) + 0xc);
    }
    if (param_2 <= iVar4) {
      iVar4 = 0;
      if (*(int *)(in_ECX + 0x14) != 0) {
        iVar4 = *(int *)(*(int *)(in_ECX + 0x14) + 0x10);
      }
      if (param_3 <= iVar4) {
        iVar4 = 0;
        if (*(int *)(in_ECX + 0x14) != 0) {
          iVar4 = *(int *)(*(int *)(in_ECX + 0x14) + 8);
        }
        if (iVar4 == iVar5) goto LAB_004a6a98;
      }
    }
  }
  operator_new(0xb4);
  iVar5 = FUN_004a51b0(iVar5,param_2 + 0x1fU & 0xffffffe0,param_3 + 0x1fU & 0xffffffe0,0);
  if (iVar5 != 0) {
    LOCK();
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
    UNLOCK();
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x14);
  *(int *)(in_ECX + 0x14) = iVar5;
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar2 + 1;
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*puVar2)(1,uVar3);
    }
  }
LAB_004a6a98:
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  if (*(int *)(in_ECX + 8) == 0) {
    *(undefined4 *)(in_ECX + 4) = 3000;
    *(undefined4 *)(in_ECX + 8) = 3000;
    local_8 = 0;
    if (DAT_00c8a668 == 0) {
      operator_new(0x54);
      DAT_00c8a668 = FUN_004635f0();
    }
    FUN_00463c00(in_ECX);
  }
  else {
    FUN_00463b90();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  ExceptionList = local_10;
  return in_ECX + 0x14;
}

