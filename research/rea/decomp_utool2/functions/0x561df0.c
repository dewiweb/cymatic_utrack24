// rea decompile_all
// name: FUN_00561df0
// address: 0x561df0
// body: available
// range: 0x561df0-0x5621cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00561df0(float param_1)

{
  undefined4 in_ECX;
  undefined4 in_EDX;
  float in_XMM3_Da;
  
  FUN_00560ca0();
  if (in_XMM3_Da <= param_1) {
    param_1 = in_XMM3_Da;
  }
  param_1 = param_1 * 0.9;
  switch(in_EDX) {
  default:
    goto switchD_00561e73_caseD_0;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    FUN_00560b70(in_ECX,in_XMM3_Da * 0.5);
    FUN_00682f20();
    FUN_00681fe0();
    return;
  case 5:
    FUN_00560b70(in_ECX,in_XMM3_Da * 0.5);
    FUN_00682f20();
    FUN_00681fe0();
    return;
  case 6:
    break;
  case 7:
    FUN_00560b70(in_ECX,param_1);
    FUN_00682f20();
    return;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    FUN_00684c50();
    FUN_00472db0(param_1);
    FUN_00684310();
    FUN_00684c50();
    FUN_00472db0(param_1);
    FUN_00683310();
    return;
  case 0x14:
    break;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    break;
  case 0x1a:
  }
  FUN_00560b70(in_ECX,param_1);
switchD_00561e73_caseD_0:
  return;
}

