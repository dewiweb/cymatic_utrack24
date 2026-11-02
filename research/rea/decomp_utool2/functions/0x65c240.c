// rea decompile_all
// name: FUN_0065c240
// address: 0x65c240
// body: available
// range: 0x65c240-0x65c316 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065c240(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  int *piVar6;
  undefined1 *puVar7;
  int *piVar8;
  int local_8;
  
  local_8 = 0;
  iVar2 = *(int *)(in_ECX + 0x1a8);
  if (0 < *(int *)(in_ECX + 100)) {
    piVar6 = (int *)(iVar2 + 0x34);
    do {
      iVar3 = piVar6[-5];
      iVar4 = 0;
      if (0 < local_8) {
        piVar5 = (int *)(iVar2 + 0x20);
        do {
          if (iVar3 == *piVar5) {
            piVar5 = *(int **)(iVar2 + 0x34 + iVar4 * 4);
            if (piVar5 != (int *)0x0) goto LAB_0065c2f8;
            break;
          }
          iVar4 = iVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar4 < local_8);
      }
      piVar5 = (int *)(*(code *)**(undefined4 **)(in_ECX + 4))(in_ECX,1,0x400);
      puVar7 = &DAT_00c02280;
      piVar8 = piVar5;
      do {
        iVar4 = 0;
        do {
          pbVar1 = puVar7 + iVar4;
          iVar4 = iVar4 + 1;
          *piVar8 = (int)((uint)*pbVar1 * -0x1fe + 0xfe01) / (iVar3 * 0x200 + -0x200);
          piVar8 = piVar8 + 1;
        } while (iVar4 < 0x10);
        puVar7 = puVar7 + 0x10;
      } while ((int)puVar7 < 0xc02380);
LAB_0065c2f8:
      local_8 = local_8 + 1;
      *piVar6 = (int)piVar5;
      piVar6 = piVar6 + 1;
    } while (local_8 < *(int *)(in_ECX + 100));
  }
  return;
}

