// rea decompile_all
// name: FUN_0063b740
// address: 0x63b740
// body: available
// range: 0x63b740-0x63b85a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0063b740(void)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071f4d3;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if ((*(uint *)(in_ECX + 0x24) <= *(uint *)(in_ECX + 0x44)) ||
     (piVar4 = *(int **)(*(int *)(in_ECX + 0x1c) + *(uint *)(in_ECX + 0x44) * 4),
     piVar4 == (int *)0x0)) {
    return 0;
  }
  uVar1 = *(undefined1 *)(in_ECX + 0x49);
  ExceptionList = &local_10;
  *(undefined1 *)(in_ECX + 0x49) = 1;
  iVar5 = 0;
  local_8 = 0;
  if (0 < piVar4[2]) {
    do {
      cVar2 = (**(code **)(**(int **)(*piVar4 + iVar5 * 4) + 4))(uVar3);
      if (cVar2 == '\0') {
        FUN_00639860();
        goto LAB_0063b7c1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < piVar4[2]);
  }
  *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x44) + 1;
LAB_0063b7c1:
  *(undefined1 *)(in_ECX + 0x48) = 1;
  LOCK();
  iVar5 = *(int *)(in_ECX + 0x34);
  *(int *)(in_ECX + 0x34) = (int)&DAT_00bfe12c;
  UNLOCK();
  piVar4 = (int *)(iVar5 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  if (0 < *(int *)(in_ECX + 0x18)) {
    piVar4 = (int *)(*(int *)(in_ECX + 8) + 0xc);
    LOCK();
    iVar5 = *piVar4;
    if (iVar5 == 0) {
      *piVar4 = 1;
      iVar5 = 0;
    }
    UNLOCK();
    if ((iVar5 == 0) && (cVar2 = FUN_0063e270(), cVar2 == '\0')) {
      LOCK();
      *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc) = 0;
      UNLOCK();
    }
  }
  *(undefined1 *)(in_ECX + 0x49) = uVar1;
  ExceptionList = local_10;
  return 1;
}

