// rea decompile_all
// name: FUN_00425cc0
// address: 0x425cc0
// body: available
// range: 0x425cc0-0x425dce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00425cc0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *in_ECX;
  int iVar5;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = param_1[2];
  iVar5 = in_ECX[2] + local_10;
  if (in_ECX[1] < iVar5) {
    FUN_00409cf0(iVar5 / 2 + iVar5 + 8 & 0xfffffff8);
  }
  local_10 = local_10 + -1;
  if (-1 < local_10) {
    local_c = 0;
    do {
      piVar1 = *(int **)(local_c + *param_1);
      iVar5 = in_ECX[2];
      in_ECX[2] = iVar5 + 1;
      if (piVar1 == (int *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = operator_new(0x20);
        *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(piVar1 + 2);
        iVar2 = piVar1[4];
        puVar3[4] = iVar2;
        if (iVar2 < 5) {
          *puVar3 = *piVar1;
          puVar3[6] = piVar1[6];
        }
        else {
          local_8 = (int)piVar1;
          if (4 < piVar1[4]) {
            local_8 = *piVar1;
          }
          if ((int)puVar3[4] < 5) {
            FUN_004c2c30(puVar3,local_8,puVar3[4]);
            puVar3[6] = piVar1[6];
          }
          else {
            uVar4 = FUN_004c554b(puVar3[4]);
            *puVar3 = uVar4;
            FUN_004c2c30(uVar4,local_8,puVar3[4]);
            puVar3[6] = piVar1[6];
          }
        }
      }
      local_c = local_c + 4;
      local_10 = local_10 + -1;
      *(undefined4 **)(*in_ECX + iVar5 * 4) = puVar3;
    } while (-1 < local_10);
  }
  return;
}

