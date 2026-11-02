// rea decompile_all
// name: FUN_0060f000
// address: 0x60f000
// body: available
// range: 0x60f000-0x60f167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060f000(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  
  if (*(int *)(in_ECX + 0x38) < *(int *)(in_ECX + 0x50)) {
    do {
      piVar1 = operator_new(0x10);
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      iVar2 = param_1 - piVar1[2];
      piVar1[3] = -1;
      if (0 < iVar2) {
        iVar5 = piVar1[2] + iVar2;
        if (piVar1[1] < iVar5) {
          iVar3 = iVar5;
          if (iVar5 < 0) {
            iVar3 = iVar5 + 1;
          }
          uVar7 = iVar5 + 8 + (iVar3 >> 1) & 0xfffffff8;
          if (piVar1[1] != uVar7) {
            if ((int)uVar7 < 1) {
              FID_conflict__free((void *)*piVar1);
              *piVar1 = 0;
            }
            else if (*piVar1 == 0) {
              iVar5 = FUN_004c554b();
              *piVar1 = iVar5;
            }
            else {
              iVar5 = FUN_004c553b(*piVar1,uVar7 * 2);
              *piVar1 = iVar5;
            }
            piVar1[1] = uVar7;
          }
        }
        puVar6 = (undefined2 *)(*piVar1 + piVar1[2] * 2);
        piVar1[2] = piVar1[2] + iVar2;
        while (iVar2 = iVar2 + -1, -1 < iVar2) {
          if (puVar6 != (undefined2 *)0x0) {
            *puVar6 = 0;
          }
          puVar6 = puVar6 + 1;
        }
      }
      iVar2 = *(int *)(in_ECX + 0x38);
      iVar5 = iVar2 + 1;
      if ((int)*(uint *)(in_ECX + 0x34) < iVar5) {
        if (iVar5 < 0) {
          iVar5 = iVar2 + 2;
        }
        uVar7 = iVar2 + 9 + (iVar5 >> 1) & 0xfffffff8;
        if (*(uint *)(in_ECX + 0x34) != uVar7) {
          if ((int)uVar7 < 1) {
            FID_conflict__free(*(void **)(in_ECX + 0x30));
            *(undefined4 *)(in_ECX + 0x30) = 0;
          }
          else if (*(int *)(in_ECX + 0x30) == 0) {
            uVar4 = FUN_004c554b();
            *(undefined4 *)(in_ECX + 0x30) = uVar4;
          }
          else {
            uVar4 = FUN_004c553b(*(int *)(in_ECX + 0x30),uVar7 * 4);
            *(undefined4 *)(in_ECX + 0x30) = uVar4;
          }
          *(uint *)(in_ECX + 0x34) = uVar7;
        }
      }
      iVar2 = *(int *)(in_ECX + 0x38);
      *(int *)(in_ECX + 0x38) = iVar2 + 1;
      *(int **)(*(int *)(in_ECX + 0x30) + iVar2 * 4) = piVar1;
    } while (*(int *)(in_ECX + 0x38) < *(int *)(in_ECX + 0x50));
  }
  return;
}

