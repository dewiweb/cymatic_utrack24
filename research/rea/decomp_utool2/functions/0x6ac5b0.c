// rea decompile_all
// name: FUN_006ac5b0
// address: 0x6ac5b0
// body: available
// range: 0x6ac5b0-0x6ac698 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ac5b0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00723540;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (*(int *)(in_ECX + 0x78) == 0) {
    return;
  }
  if (*(int *)(*(int *)(in_ECX + 0x78) + 8) != 0) {
    ExceptionList = &local_10;
    FUN_00415ff0(-(uint)(in_ECX != 0) & in_ECX + 0x70U);
    if (*(char *)(in_ECX + 0x9a) == '\0') {
      if (*(int *)(in_ECX + 0x78) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(*(int *)(in_ECX + 0x78) + 8);
      }
      FUN_006cf2a0(uVar5);
      puVar6 = *(undefined4 **)(in_ECX + 0x78);
      if (puVar6 == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return;
      }
      *(undefined4 *)(in_ECX + 0x78) = 0;
      LOCK();
      piVar1 = puVar6 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        ExceptionList = local_10;
        return;
      }
      puVar6 = (undefined4 *)*puVar6;
    }
    else {
      if (*(int *)(in_ECX + 0x78) == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = *(undefined4 **)(*(int *)(in_ECX + 0x78) + 8);
      }
      puVar3 = *(undefined4 **)(in_ECX + 0x78);
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined4 *)(in_ECX + 0x78) = 0;
        LOCK();
        piVar1 = puVar3 + 1;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*puVar3)(1,uVar4);
        }
      }
      if (puVar6 == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return;
      }
      puVar6 = (undefined4 *)*puVar6;
    }
    (*(code *)*puVar6)(1);
    ExceptionList = local_10;
    return;
  }
  return;
}

