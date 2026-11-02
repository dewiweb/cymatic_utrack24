// rea decompile_all
// name: FUN_006572d0
// address: 0x6572d0
// body: available
// range: 0x6572d0-0x6573c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_006572d0(uint *param_1,uint *param_2)

{
  uint uVar1;
  int in_ECX;
  uint in_EDX;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_2;
  uVar1 = *param_1;
  if (uVar3 < in_EDX) {
    do {
      switch(*(undefined1 *)(uVar3 + in_ECX)) {
      case 0x2b:
        uVar2 = 4;
        break;
      default:
        goto switchD_00657307_caseD_2c;
      case 0x2d:
        uVar2 = 0x84;
        break;
      case 0x2e:
        uVar2 = 0x10;
        break;
      case 0x30:
        uVar2 = 8;
        break;
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        uVar2 = 0x108;
        break;
      case 0x45:
      case 0x65:
        uVar2 = 0x20;
      }
      switch(((uVar1 & 3) - 4) + (uVar2 & 0x3c)) {
      case 0:
        if ((uVar1 & 0x3c) != 0) goto switchD_00657307_caseD_2c;
        uVar1 = uVar1 | uVar2;
        break;
      default:
        goto switchD_00657307_caseD_2c;
      case 2:
        if ((uVar1 & 0x3c) != 0) goto switchD_00657307_caseD_2c;
        uVar1 = uVar1 | 4;
        break;
      case 4:
        if ((uVar1 & 0x10) != 0) {
          uVar1 = uVar1 & 0x1c0 | 0x11;
        }
      case 5:
        uVar1 = uVar1 | uVar2 | 0x40;
        break;
      case 6:
        uVar1 = uVar1 | 0x48;
        break;
      case 0xc:
        if ((uVar1 & 0x10) != 0) goto switchD_00657307_caseD_2c;
        if ((uVar1 & 8) == 0) {
          uVar1 = uVar1 & 0x1c0 | uVar2 | 1;
        }
        else {
          uVar1 = uVar1 | uVar2;
        }
        break;
      case 0x1c:
      case 0x1d:
        if ((uVar1 & 8) == 0) goto switchD_00657307_caseD_2c;
        uVar1 = uVar1 & 0x1c0 | 2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < in_EDX);
switchD_00657307_caseD_2c:
  }
  *param_1 = uVar1;
  *param_2 = uVar3;
  return uVar1 >> 3 & 1;
}

