// rea decompile_all
// name: FUN_005cdbd0
// address: 0x5cdbd0
// body: available
// range: 0x5cdbd0-0x5cdcdc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cdbd0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_ECX;
  int *piVar7;
  float10 fVar8;
  void *pvStack_30;
  void *apvStack_2c [8];
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&pvStack_30;
  if (*(int **)(in_ECX + 0x98) != (int *)0x0) {
    fVar8 = (float10)(**(code **)(**(int **)(in_ECX + 0x98) + 0x38))();
    *(double *)(in_ECX + 0x40) = (double)fVar8;
    uVar4 = (**(code **)(**(int **)(in_ECX + 0x98) + 0x34))();
    *(undefined4 *)(in_ECX + 0x48) = uVar4;
    puVar5 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x98) + 0x44))(apvStack_2c);
    uVar4 = *(undefined4 *)(in_ECX + 0x4c);
    *(undefined4 *)(in_ECX + 0x4c) = *puVar5;
    *puVar5 = uVar4;
    uVar4 = puVar5[2];
    uVar1 = puVar5[3];
    uVar2 = puVar5[4];
    *(undefined4 *)(in_ECX + 0x50) = puVar5[1];
    *(undefined4 *)(in_ECX + 0x54) = uVar4;
    *(undefined4 *)(in_ECX + 0x58) = uVar1;
    *(undefined4 *)(in_ECX + 0x5c) = uVar2;
    *(undefined4 *)(in_ECX + 0x60) = puVar5[5];
    *(undefined4 *)(in_ECX + 100) = puVar5[6];
    *(undefined1 *)(in_ECX + 0x68) = *(undefined1 *)(puVar5 + 7);
    FID_conflict__free(pvStack_30);
    puVar5 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x98) + 0x40))(&pvStack_30);
    uVar4 = *(undefined4 *)(in_ECX + 0x70);
    *(undefined4 *)(in_ECX + 0x70) = *puVar5;
    *puVar5 = uVar4;
    uVar4 = puVar5[2];
    uVar1 = puVar5[3];
    uVar2 = puVar5[4];
    *(undefined4 *)(in_ECX + 0x74) = puVar5[1];
    *(undefined4 *)(in_ECX + 0x78) = uVar4;
    *(undefined4 *)(in_ECX + 0x7c) = uVar1;
    *(undefined4 *)(in_ECX + 0x80) = uVar2;
    *(undefined4 *)(in_ECX + 0x84) = puVar5[5];
    *(undefined4 *)(in_ECX + 0x88) = puVar5[6];
    *(undefined1 *)(in_ECX + 0x8c) = *(undefined1 *)(puVar5 + 7);
    FID_conflict__free(apvStack_2c[0]);
  }
  if (0 < *(int *)(in_ECX + 0x18)) {
    piVar7 = (int *)(*(int *)(in_ECX + 8) + 0xc);
    LOCK();
    iVar6 = *piVar7;
    if (iVar6 == 0) {
      *piVar7 = 1;
      iVar6 = 0;
    }
    UNLOCK();
    if ((iVar6 == 0) && (cVar3 = FUN_0063e270(), cVar3 == '\0')) {
      LOCK();
      *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc) = 0;
      UNLOCK();
    }
  }
  __security_check_cookie(local_c ^ (uint)&pvStack_30);
  return;
}

