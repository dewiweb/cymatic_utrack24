// rea decompile_all
// name: FUN_006e85c0
// address: 0x6e85c0
// body: available
// range: 0x6e85c0-0x6e86c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e85c0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  bool bVar6;
  int *piVar7;
  int local_2c [2];
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00728b77;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar6 = false;
  local_2c[1] = 0;
  local_14 = uVar1;
  puVar2 = (undefined4 *)FUN_0063bf80(local_24);
  iVar3 = (**(code **)(*(int *)*puVar2 + 4))(puVar2 + 2,uVar1);
  if ((iVar3 != 0) && (iVar5 = *(int *)(in_ECX + 0x90) + -1, -1 < iVar5)) {
    do {
      piVar7 = *(int **)(*(int *)(in_ECX + 0x88) + iVar5 * 4);
      if (piVar7[1] == iVar3) goto LAB_006e8632;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  piVar7 = (int *)0x0;
LAB_006e8632:
  (**(code **)(*local_24[0] + 0x54))(local_1c);
  if (piVar7 != (int *)0x0) {
    piVar4 = (int *)FUN_006e8370(local_2c);
    if (*piVar4 != *piVar7) {
      iVar3 = FUN_00448730(*piVar4,*piVar7);
      bVar6 = true;
      if (iVar3 != 0) goto LAB_006e8680;
    }
    bVar6 = true;
  }
LAB_006e8680:
  if ((bVar6) && (piVar7 = (int *)(local_2c[0] + -8), piVar7 != &DAT_00bfe124)) {
    LOCK();
    iVar3 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

