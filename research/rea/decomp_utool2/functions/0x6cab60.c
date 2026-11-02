// rea decompile_all
// name: FUN_006cab60
// address: 0x6cab60
// body: available
// range: 0x6cab60-0x6cac5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_006cab60(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int local_8;
  
  piVar1 = param_1;
  param_1 = (int *)0x0;
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  if (0 < in_ECX[2]) {
    local_8 = 0;
    do {
      puVar5 = (undefined4 *)(local_8 + *in_ECX);
      if ((0 < (int)puVar5[2]) && (0 < (int)puVar5[3])) {
        iVar2 = piVar1[2];
        iVar3 = iVar2 + 1;
        if (piVar1[1] < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar2 + 2;
          }
          uVar6 = iVar2 + 9 + (iVar3 >> 1) & 0xfffffff8;
          if (piVar1[1] != uVar6) {
            if ((int)uVar6 < 1) {
              FID_conflict__free((void *)*piVar1);
              *piVar1 = 0;
            }
            else if (*piVar1 == 0) {
              iVar2 = FUN_004c554b();
              *piVar1 = iVar2;
            }
            else {
              iVar2 = FUN_004c553b(*piVar1,uVar6 << 4);
              *piVar1 = iVar2;
            }
            piVar1[1] = uVar6;
          }
        }
        iVar2 = piVar1[2];
        piVar1[2] = iVar2 + 1;
        puVar4 = (undefined4 *)(iVar2 * 0x10 + *piVar1);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *puVar5;
          puVar4[1] = puVar5[1];
          puVar4[2] = puVar5[2];
          puVar4[3] = puVar5[3];
        }
      }
      param_1 = (int *)((int)param_1 + 1);
      local_8 = local_8 + 0x38;
    } while ((int)param_1 < in_ECX[2]);
  }
  return piVar1;
}

