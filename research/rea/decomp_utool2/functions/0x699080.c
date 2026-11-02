// rea decompile_all
// name: FUN_00699080
// address: 0x699080
// body: available
// range: 0x699080-0x6991ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00699080(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined1 *puStack_30;
  int *piStack_2c;
  undefined1 local_18 [20];
  
  iVar7 = *(int *)(in_ECX + 0x80) + -1;
  if (-1 < iVar7) {
    piStack_2c = (int *)(*(int *)(in_ECX + 0x78) + iVar7 * 4);
    while (*(int *)(*piStack_2c + 4) != param_1) {
      piStack_2c = piStack_2c + -1;
      iVar7 = iVar7 + -1;
      if (iVar7 < 0) {
        return;
      }
    }
    iVar7 = *(int *)(*(int *)(in_ECX + 0x78) + iVar7 * 4);
    if ((iVar7 != 0) && (*(int *)(iVar7 + 0xc) != param_2)) {
      puStack_30 = (undefined1 *)0x6990dd;
      uVar3 = FUN_006d78e0();
      iVar6 = *(int *)(iVar7 + 0x10);
      if ((*(int *)(iVar7 + 0x10) <= param_2) && (iVar6 = param_2, *(int *)(iVar7 + 0x14) < param_2)
         ) {
        iVar6 = *(int *)(iVar7 + 0x14);
      }
      *(int *)(iVar7 + 0xc) = iVar6;
      *(double *)(iVar7 + 0x18) = (double)iVar6;
      if (*(char *)(in_ECX + 0x98) != '\0') {
        piStack_2c = (int *)0x1;
        puStack_30 = (undefined1 *)param_1;
        uStack_34 = 0x699118;
        iVar7 = FUN_00699020();
        uVar1 = iVar7 + 1;
        if (uVar1 < uVar3) {
          puStack_30 = local_18;
          uStack_34 = 0x69912c;
          piStack_2c = (int *)uVar1;
          piVar4 = (int *)FUN_006d7870();
          iVar7 = *piVar4;
          if (*(int *)(in_ECX + 0xb4) == 0) {
            piStack_2c = (int *)0x69913e;
            uVar5 = FUN_00698f70();
            *(undefined4 *)(in_ECX + 0xb4) = uVar5;
          }
          piStack_2c = (int *)(*(int *)(in_ECX + 0xb4) - iVar7);
          uStack_34 = 0x699155;
          puStack_30 = (undefined1 *)uVar1;
          puStack_30 = (undefined1 *)FUN_00697d20();
          uStack_34 = 0x69915d;
          FUN_00698d60();
        }
      }
      FUN_006e6400(auStack_38);
      FUN_006ce9f0(1);
      *(undefined1 *)(in_ECX + 0x95) = 1;
      piVar4 = (int *)(*(int *)(in_ECX + 0x74) + 0xc);
      LOCK();
      iVar7 = *piVar4;
      if (iVar7 == 0) {
        *piVar4 = 1;
        iVar7 = 0;
      }
      UNLOCK();
      if (iVar7 == 0) {
        piStack_2c = (int *)0x699195;
        cVar2 = FUN_0063e270();
        if (cVar2 == '\0') {
          LOCK();
          *(undefined4 *)(*(int *)(in_ECX + 0x74) + 0xc) = 0;
          UNLOCK();
        }
      }
    }
  }
  return;
}

