// rea decompile_all
// name: FUN_0044e5f0
// address: 0x44e5f0
// body: available
// range: 0x44e5f0-0x44e6a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044e5f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  undefined1 uVar1;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  uint local_10;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar1 = 0;
  local_28 = in_ECX;
  FUN_0045a7e0(param_1,0,0xffffffff);
  local_2c = (undefined4 *)FUN_0044e520(param_2,param_3,uVar1);
  if (0xf < (uint)local_2c[5]) {
    local_2c = (undefined4 *)*local_2c;
  }
  *in_ECX = std::exception::vftable;
  *(undefined8 *)(in_ECX + 1) = 0;
  local_28 = (undefined4 *)CONCAT31(local_28._1_3_,1);
  ___std_exception_copy(&local_2c,in_ECX + 1);
  *in_ECX = std::runtime_error::vftable;
  if (0xf < local_10) {
    FUN_0045b830(local_24,local_10 + 1);
  }
  in_ECX[3] = param_2;
  in_ECX[4] = param_3;
  *in_ECX = std::_System_error::vftable;
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

