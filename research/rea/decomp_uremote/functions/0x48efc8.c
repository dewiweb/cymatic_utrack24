// rea decompile_all
// name: FUN_0048efc8
// address: 0x48efc8
// body: available
// range: 0x48efc8-0x48f07a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048efc8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_2e0 [22];
  code *local_288;
  code *local_284;
  undefined4 *local_280;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_c;
  
  local_c = DAT_00955fd4 ^ (uint)local_2e0;
  _memset(local_2e0,0,0x2d0);
  local_a8 = 0x7fffffff;
  local_a4 = 0x7fffffff;
  local_a0 = 0;
  local_9c = 0;
  FUN_00491566(0,0);
  iVar1 = FUN_0048ef15();
  if ((iVar1 != 0) && (puVar2 = (undefined4 *)FUN_0049176b(), puVar2 != (undefined4 *)0x0)) {
    local_288 = FUN_0048ee65;
    local_284 = thunk_FUN_00491789;
    local_280 = puVar2;
    puVar3 = local_2e0;
    for (iVar1 = 0xb4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  __security_check_cookie(local_c ^ (uint)local_2e0);
  return;
}

