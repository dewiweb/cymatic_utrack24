// rea decompile_all
// name: FUN_006c8780
// address: 0x6c8780
// body: available
// range: 0x6c8780-0x6c8876 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c8780(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00726070;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = *(int *)(in_ECX + 0xc);
  if ((iVar2 != 0) && (*(int *)(in_ECX + 0xb4) != 0)) {
    puVar5 = (undefined4 *)FUN_0040de70(in_ECX);
    if (puVar5 != (undefined4 *)0x0) {
      LOCK();
      puVar5[1] = puVar5[1] + 1;
      UNLOCK();
    }
    local_8 = 0;
    uVar3 = *(uint *)(iVar2 + 0x30);
    do {
      do {
        uVar3 = uVar3 - 1;
        if ((int)uVar3 < 0) goto LAB_006c884c;
        if (uVar3 < *(uint *)(iVar2 + 0x30)) {
          iVar6 = *(int *)(*(int *)(iVar2 + 0x28) + uVar3 * 4);
        }
        else {
          iVar6 = 0;
        }
      } while (((iVar6 == in_ECX) ||
               (iVar6 = FUN_006f6dd6(iVar6,0,&juce::Component::RTTI_Type_Descriptor,
                                     &juce::Button::RTTI_Type_Descriptor,0,uVar4), iVar6 == 0)) ||
              (*(int *)(iVar6 + 0xb4) != *(int *)(in_ECX + 0xb4)));
      FUN_006e5380(0,param_1);
      if (puVar5 == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return;
      }
    } while (puVar5[2] != 0);
LAB_006c884c:
    if (puVar5 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar5 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar5)(1);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

