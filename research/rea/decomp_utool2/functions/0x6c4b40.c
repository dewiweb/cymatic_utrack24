// rea decompile_all
// name: thunk_FUN_006c49d0
// address: 0x6c4b40
// body: available
// range: 0x6c4b40-0x6c4b44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_006c49d0(void)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 extraout_EDX;
  int iVar6;
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 uStack_20;
  int iStack_18;
  int iStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &LAB_00725b97;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  puStack_24 = (undefined1 *)(in_ECX + 0xc0);
  if (*(char *)(in_ECX + 0xc0) == '\0') {
    uStack_20 = 0;
    *puStack_24 = 1;
    uStack_8 = 0;
    iVar6 = *(int *)(in_ECX + 0x30) + -1;
    iStack_34 = 0;
    iStack_30 = 0;
    iStack_2c = 0;
    iStack_28 = 0;
    if (iVar6 < 0) {
      iStack_14 = 0;
      iStack_18 = 0;
    }
    else {
      do {
        uVar3 = FUN_006cdec0(auStack_44);
        piVar4 = (int *)FUN_004af870(auStack_54,uVar3);
        iVar6 = iVar6 + -1;
        iStack_30 = piVar4[1];
        iStack_34 = *piVar4;
        iStack_2c = piVar4[2];
        iStack_28 = piVar4[3];
        iStack_18 = iStack_34;
        iStack_14 = iStack_30;
      } while (-1 < iVar6);
    }
    iVar6 = iStack_18;
    iStack_34 = iStack_18;
    iStack_30 = iStack_14;
    FUN_00472d00(*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14));
    cVar2 = FUN_004af950(extraout_EDX);
    if (cVar2 != '\0') {
      if ((iVar6 != 0) || (iStack_14 != 0)) {
        *(int *)(in_ECX + 0x70) = *(int *)(in_ECX + 0x70) - iVar6;
        *(int *)(in_ECX + 0x74) = *(int *)(in_ECX + 0x74) - iStack_14;
        uVar1 = *(uint *)(in_ECX + 0x30);
        iVar6 = iStack_14;
        while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
          if ((uVar1 < *(uint *)(in_ECX + 0x30)) &&
             (*(int *)(*(int *)(in_ECX + 0x28) + uVar1 * 4) != 0)) {
            puVar5 = (undefined4 *)FUN_00474700(auStack_54,iStack_18,iVar6);
            FUN_006e9790(*puVar5,puVar5[1],puVar5[2],puVar5[3]);
            iVar6 = iStack_14;
          }
        }
      }
      FUN_006e9790(iStack_34,iStack_30,iStack_2c,iStack_28);
    }
    *(undefined1 *)(in_ECX + 0xc0) = 0;
  }
  ExceptionList = pvStack_10;
  return;
}

