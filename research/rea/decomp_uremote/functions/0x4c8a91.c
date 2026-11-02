// rea decompile_all
// name: FUN_004c8a91
// address: 0x4c8a91
// body: available
// range: 0x4c8a91-0x4c8aee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c8a91(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 in_ECX;
  undefined4 uVar4;
  undefined1 local_8 [4];
  
  iVar3 = thunk_FUN_004c1d58();
  iVar1 = *(int *)(iVar3 + 4);
  uVar4 = 0;
  cVar2 = FUN_004bf38c(in_ECX);
  FUN_004c1e29(local_8,(cVar2 != '\0') + 0x1000100,uVar4);
  (**(code **)(iVar1 + 4))(param_1);
  (**(code **)(*(int *)(iVar3 + 4) + 0x10))(param_1);
  return;
}

