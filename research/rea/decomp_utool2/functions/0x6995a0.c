// rea decompile_all
// name: FUN_006995a0
// address: 0x6995a0
// body: available
// range: 0x6995a0-0x6996cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006995a0(void)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 local_20;
  
  dVar7 = **(double **)(in_ECX + 0x14);
  DVar2 = timeGetTime();
  if ((DAT_00c8a644 <= DVar2) || (DVar2 < DAT_00c8a644 - 1000)) {
    DAT_00c8a644 = DVar2;
  }
  iVar1 = *(int *)(in_ECX + 0x2c);
  dVar8 = 1.0;
  *(DWORD *)(in_ECX + 0x2c) = DVar2;
  dVar5 = 0.0;
  if (((*(double *)(in_ECX + 0x18) == dVar7) && (dVar5 = 0.0, 0.0 <= dVar7)) && (dVar7 < 1.0)) {
    if (*(int *)(in_ECX + 0x28) == *(int *)(in_ECX + 0x24)) {
      return;
    }
    local_20 = *(undefined4 *)(in_ECX + 0x28);
    uStack_24 = 0x69962b;
    dVar5 = 0.0;
    iVar3 = FUN_00448730();
    if (iVar3 == 0) {
      return;
    }
  }
  dVar6 = *(double *)(in_ECX + 0x18);
  if ((((dVar6 < dVar7) && (dVar5 <= dVar7)) &&
      ((dVar7 < dVar8 && ((dVar5 <= dVar6 && (dVar6 < dVar8)))))) &&
     (dVar6 = (double)(int)(DVar2 - iVar1) * 0.0008 + dVar6, dVar6 <= dVar7)) {
    dVar7 = dVar6;
  }
  *(double *)(in_ECX + 0x18) = dVar7;
  piVar4 = (int *)(*(int *)(in_ECX + 0x24) + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(in_ECX + 0x28);
  *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x24);
  UNLOCK();
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      local_20 = 0x6996b1;
      FID_conflict__free(piVar4);
    }
  }
  FUN_006e6400(auStack_28);
  FUN_006ce9f0(1);
  return;
}

