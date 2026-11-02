// rea decompile_all
// name: FUN_006ece20
// address: 0x6ece20
// body: available
// range: 0x6ece20-0x6ecfed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ece20(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar6 = *(int *)(*(int *)(in_ECX + 0x7c) + 8) / 5000;
  iVar5 = 10;
  if (10 < iVar6) {
    iVar5 = iVar6;
  }
  if (*(int *)(in_ECX + 0x324) == 0) {
    puVar2 = operator_new(0x10);
    *puVar2 = *(undefined4 *)(in_ECX + 0x7c);
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    iVar6 = *(int *)(in_ECX + 0x324) + 1;
    if (*(int *)(in_ECX + 800) < iVar6) {
      FUN_00409cf0(iVar6 / 2 + *(int *)(in_ECX + 0x324) + 9 & 0xfffffff8);
    }
    iVar6 = *(int *)(in_ECX + 0x324);
    *(int *)(in_ECX + 0x324) = iVar6 + 1;
    *(undefined4 **)(*(int *)(in_ECX + 0x31c) + iVar6 * 4) = puVar2;
  }
  if (*(int *)(in_ECX + 0x300) != 0) {
    while( true ) {
      if (*(int *)(in_ECX + 0x324) < 1) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x31c) + -4 + *(int *)(in_ECX + 0x324) * 4);
      }
      if (param_1 <= (int)puVar2[2]) break;
      puVar3 = operator_new(0x10);
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3[3] = puVar2[3];
      iVar6 = *(int *)(in_ECX + 0x324);
      iVar7 = iVar6 + 1;
      if ((int)*(uint *)(in_ECX + 800) < iVar7) {
        if (iVar7 < 0) {
          iVar7 = iVar6 + 2;
        }
        uVar8 = iVar6 + 9 + (iVar7 >> 1) & 0xfffffff8;
        if (*(uint *)(in_ECX + 800) != uVar8) {
          if ((int)uVar8 < 1) {
            FID_conflict__free(*(void **)(in_ECX + 0x31c));
            *(undefined4 *)(in_ECX + 0x31c) = 0;
          }
          else if (*(int *)(in_ECX + 0x31c) == 0) {
            uVar4 = FUN_004c554b();
            *(undefined4 *)(in_ECX + 0x31c) = uVar4;
          }
          else {
            uVar4 = FUN_004c553b(*(int *)(in_ECX + 0x31c),uVar8 * 4);
            *(undefined4 *)(in_ECX + 0x31c) = uVar4;
          }
          *(uint *)(in_ECX + 800) = uVar8;
        }
      }
      iVar6 = *(int *)(in_ECX + 0x324);
      *(int *)(in_ECX + 0x324) = iVar6 + 1;
      *(undefined4 **)(*(int *)(in_ECX + 0x31c) + iVar6 * 4) = puVar3;
      iVar6 = param_1;
      if (puVar2[2] + iVar5 < param_1) {
        iVar6 = puVar2[2] + iVar5;
      }
      (**(code **)(**(int **)(in_ECX + 0x300) + 4))(puVar3);
      iVar7 = puVar3[2];
      while (iVar7 < iVar6) {
        cVar1 = FUN_006f2f50();
        if (cVar1 != '\0') {
          return;
        }
        (**(code **)(**(int **)(in_ECX + 0x300) + 4))(puVar3);
        iVar7 = puVar3[2];
      }
    }
  }
  return;
}

