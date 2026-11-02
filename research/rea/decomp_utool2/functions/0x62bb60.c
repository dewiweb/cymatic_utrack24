// rea decompile_all
// name: FUN_0062bb60
// address: 0x62bb60
// body: available
// range: 0x62bb60-0x62bc32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062bb60(uint param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  
  do {
    param_2 = param_2 + -1;
    if (param_2 < 0) {
      return;
    }
    iVar2 = (int)param_1 >> 5;
    if (param_3 == '\0') {
      if ((-1 < (int)param_1) && ((int)param_1 <= in_ECX[6])) {
        piVar4 = (int *)*in_ECX;
        if (piVar4 == (int *)0x0) {
          piVar4 = in_ECX + 1;
        }
        piVar4[iVar2] = piVar4[iVar2] & ~(1 << (param_1 & 0x1f));
        if (param_1 == in_ECX[6]) {
          piVar4 = (int *)*in_ECX;
          if (piVar4 == (int *)0x0) {
            piVar4 = in_ECX + 1;
          }
          iVar2 = in_ECX[6] >> 5;
          if (-1 < iVar2) {
LAB_0062bc00:
            uVar1 = piVar4[iVar2];
            if (uVar1 == 0) break;
            iVar3 = 0x1f;
            if (uVar1 != 0) {
              for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
              }
            }
            iVar3 = iVar2 * 0x20 + iVar3;
            goto LAB_0062bc0f;
          }
LAB_0062bc0c:
          iVar3 = -1;
LAB_0062bc0f:
          in_ECX[6] = iVar3;
        }
      }
    }
    else if (-1 < (int)param_1) {
      if (in_ECX[6] < (int)param_1) {
        FUN_006264b0(iVar2 + 1);
        in_ECX[6] = param_1;
      }
      piVar4 = (int *)*in_ECX;
      if (piVar4 == (int *)0x0) {
        piVar4 = in_ECX + 1;
      }
      piVar4[iVar2] = piVar4[iVar2] | 1 << (param_1 & 0x1f);
    }
    param_1 = param_1 + 1;
  } while( true );
  iVar2 = iVar2 + -1;
  if (iVar2 < 0) goto LAB_0062bc0c;
  goto LAB_0062bc00;
}

