// rea decompile_all
// name: FUN_00524010
// address: 0x524010
// body: available
// range: 0x524010-0x524126 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00524010(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 in_ECX;
  undefined4 local_24;
  
  uVar1 = FUN_0052e670();
  uVar2 = __aullshr();
  uVar3 = __aullshr();
  uVar4 = __aullshr();
  FUN_00503380();
  local_24 = FUN_00538bf0(in_ECX,DAT_00951014,(uVar2 ^ uVar1 ^ uVar3 ^ uVar4) & 0x3fff,0,1);
  if (local_24 != 0) {
    iVar5 = FUN_005272e0();
    if (iVar5 == 0) {
      (**(code **)(*(int *)(local_24 + 0x28 + *(int *)(*(int *)(local_24 + 0x28) + 8)) + 4))();
      local_24 = 0;
    }
    else {
      FUN_00565ec0();
    }
  }
  return local_24;
}

