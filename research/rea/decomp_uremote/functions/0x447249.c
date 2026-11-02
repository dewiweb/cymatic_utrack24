// rea decompile_all
// name: FUN_00447249
// address: 0x447249
// body: available
// range: 0x447249-0x4472c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00447249(void)

{
  int iVar1;
  undefined1 in_AL;
  undefined4 uVar2;
  char extraout_DL;
  int unaff_ESI;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  *(undefined1 *)(unaff_ESI + 0x16d) = in_AL;
  uVar4 = 0;
  uVar3 = 0;
  local_a = 4;
  local_c = 2;
  local_8 = 0xb207;
  local_6 = 0;
  iVar1 = *(int *)(*(int *)(unaff_ESI + 0x14) + 0x14);
  uVar2 = thunk_FUN_00445c93(*(char *)(unaff_ESI + 0x16d) != '\0');
  uVar2 = FUN_00503bc0(&local_c,extraout_DL != '\0',uVar2,uVar3,uVar4);
  (**(code **)(iVar1 + 0x1c))(0,uVar2);
  return;
}

