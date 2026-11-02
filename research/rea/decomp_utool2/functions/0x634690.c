// rea decompile_all
// name: FUN_00634690
// address: 0x634690
// body: available
// range: 0x634690-0x634841 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00634690(void)

{
  undefined4 *in_ECX;
  undefined4 in_EDX;
  WCHAR local_2014 [2048];
  WCHAR local_1014 [2048];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071ea31;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  switch(in_EDX) {
  case 0:
    FUN_00612bb0(local_14);
    break;
  case 1:
    FUN_00612bb0(local_14);
    break;
  case 2:
    FUN_00612bb0(local_14);
    break;
  case 3:
    FUN_00612bb0(local_14);
    break;
  case 4:
    FUN_00612bb0(local_14);
    break;
  case 5:
    FUN_00612bb0(local_14);
    break;
  case 6:
    FUN_00612bb0(local_14);
    break;
  case 7:
    FUN_00612bb0(local_14);
    break;
  case 8:
    FUN_00612bb0(local_14);
    break;
  case 9:
    local_1014[0] = L'\0';
    GetTempPathW(0x800,local_1014);
    FUN_0045cae0(local_1014);
    local_8 = 0;
    goto LAB_006347b0;
  case 10:
  case 0xb:
  case 0xc:
    FUN_0062d920();
    FUN_00612ae0();
    break;
  case 0xd:
    FUN_00612ae0();
    break;
  case 0xe:
    local_2014[0] = L'\0';
    GetSystemDirectoryW(local_2014,0x800);
    FUN_0045cae0(local_2014);
    local_8 = 1;
LAB_006347b0:
    FUN_00627bf0();
    FUN_00637c10();
    break;
  case 0xf:
    FUN_00612bb0(local_14);
    break;
  default:
    *in_ECX = &DAT_00bfe12c;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

