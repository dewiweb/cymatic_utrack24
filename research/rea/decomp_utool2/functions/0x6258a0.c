// rea decompile_all
// name: FUN_006258a0
// address: 0x6258a0
// body: available
// range: 0x6258a0-0x625951 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006258a0(int *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int *in_ECX;
  int iVar4;
  int *piVar5;
  char cVar6;
  
  if ((char)in_ECX[7] != '\0') {
    piVar5 = (int *)*in_ECX;
    if (piVar5 == (int *)0x0) {
      piVar5 = in_ECX + 1;
    }
    iVar4 = in_ECX[6] >> 5;
    if (-1 < iVar4) {
LAB_006258c2:
      uVar1 = piVar5[iVar4];
      if (uVar1 == 0) goto code_r0x006258c9;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      if (iVar4 * 0x20 + iVar2 < 0) goto LAB_006258ce;
      cVar6 = '\x01';
      goto LAB_006258d0;
    }
  }
LAB_006258ce:
  cVar6 = '\0';
LAB_006258d0:
  if ((char)param_1[7] != '\0') {
    piVar5 = (int *)*param_1;
    if (piVar5 == (int *)0x0) {
      piVar5 = param_1 + 1;
    }
    iVar4 = param_1[6] >> 5;
    if (-1 < iVar4) {
LAB_006258f0:
      uVar1 = piVar5[iVar4];
      if (uVar1 == 0) goto code_r0x006258f7;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      if (-1 < iVar4 * 0x20 + iVar2) {
        cVar3 = '\x01';
        goto LAB_006258fe;
      }
    }
  }
LAB_006258fc:
  cVar3 = '\0';
LAB_006258fe:
  if (cVar6 == cVar3) {
    iVar4 = FUN_006257b0(param_1);
    if (cVar6 != '\0') {
      return -iVar4;
    }
  }
  else {
    iVar4 = (uint)(cVar6 == '\0') * 2 + -1;
  }
  return iVar4;
code_r0x006258c9:
  iVar4 = iVar4 + -1;
  if (iVar4 < 0) goto LAB_006258ce;
  goto LAB_006258c2;
code_r0x006258f7:
  iVar4 = iVar4 + -1;
  if (iVar4 < 0) goto LAB_006258fc;
  goto LAB_006258f0;
}

