// rea decompile_all
// name: FUN_00688e20
// address: 0x688e20
// body: available
// range: 0x688e20-0x688f27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00688e20(void)

{
  BOOL BVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  bool bVar6;
  uint local_c;
  
  FUN_004b0210();
  if (*(int *)(in_ECX + 0x2c) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0x28));
    *(undefined4 *)(in_ECX + 0x28) = 0;
    *(undefined4 *)(in_ECX + 0x2c) = 0;
  }
  *(undefined4 *)(in_ECX + 0x30) = 0;
  local_c = 0;
  iVar5 = *(int *)(in_ECX + 0x24);
  if (0 < *(int *)(iVar5 + 0x14)) {
    bVar6 = *(int *)(iVar5 + 0x14) != 0;
    do {
      if (bVar6) {
        puVar4 = *(undefined4 **)(*(int *)(iVar5 + 0xc) + local_c * 4);
      }
      else {
        puVar4 = (undefined4 *)0x0;
      }
      iVar5 = 0;
      if (0 < (int)puVar4[6]) {
        iVar3 = 0;
        do {
          FUN_00688f70(*puVar4,puVar4[4] + iVar3,0xffffffff);
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + 0xc;
        } while (iVar5 < (int)puVar4[6]);
      }
      iVar5 = *(int *)(in_ECX + 0x24);
      local_c = local_c + 1;
      bVar6 = local_c < *(uint *)(iVar5 + 0x14);
    } while ((int)local_c < (int)*(uint *)(iVar5 + 0x14));
  }
  if (0 < *(int *)(in_ECX + 0x1c)) {
    piVar2 = (int *)(*(int *)(in_ECX + 0xc) + 0xc);
    LOCK();
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      *piVar2 = 1;
      iVar5 = 0;
    }
    UNLOCK();
    if (iVar5 == 0) {
      puVar4 = *(undefined4 **)(in_ECX + 0xc);
      if ((DAT_00c8a658 != 0) && (*(char *)(DAT_00c8a658 + 4) == '\0')) {
        LOCK();
        puVar4[1] = puVar4[1] + 1;
        UNLOCK();
        BVar1 = PostMessageW(DAT_00c8a650,0x47b,0,(LPARAM)puVar4);
        if (BVar1 != 0) {
          return;
        }
      }
      if (puVar4 != (undefined4 *)0x0) {
        piVar2 = puVar4 + 1;
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        LOCK();
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*puVar4)(1);
        }
      }
      LOCK();
      *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0xc) = 0;
      UNLOCK();
    }
  }
  return;
}

