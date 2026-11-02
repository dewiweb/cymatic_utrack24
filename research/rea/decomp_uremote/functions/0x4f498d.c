// rea decompile_all
// name: FUN_004f498d
// address: 0x4f498d
// body: available
// range: 0x4f498d-0x4f4a0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f498d(HIMC param_1,int param_2)

{
  undefined4 uVar1;
  int *unaff_EDI;
  tagCANDIDATEFORM local_48;
  undefined1 local_28 [16];
  LONG local_18;
  int local_14;
  int local_c;
  int local_8;
  
  local_8 = FUN_005cdbcf();
  if (local_8 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 4);
    (**(code **)(*unaff_EDI + 0x1c))(local_28);
    FUN_004c092e(uVar1,local_8);
    local_48.ptCurrentPos.x = local_18;
    local_48.ptCurrentPos.y = local_14 + local_c;
    local_48.dwIndex = 0;
    local_48.dwStyle = 0x40;
    local_48.rcArea.left = 0;
    local_48.rcArea.top = 0;
    local_48.rcArea.right = 0;
    local_48.rcArea.bottom = 0;
    ImmSetCandidateWindow(param_1,&local_48);
  }
  return;
}

