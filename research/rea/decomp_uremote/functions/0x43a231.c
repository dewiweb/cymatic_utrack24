// rea decompile_all
// name: FUN_0043a231
// address: 0x43a231
// body: available
// range: 0x43a231-0x43a2d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0043a231(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar3 = FUN_005af82d(0x34);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0043a18c(1);
  }
  *(undefined4 *)(iVar3 + 4) = param_1;
  FUN_004d076d();
  puVar1 = (undefined4 *)(iVar3 + 0x24);
  if (puVar1 != in_EAX) {
    FUN_0043a8ce(&local_10);
    if (puVar1 != &local_10) {
      uVar2 = *puVar1;
      *puVar1 = local_10;
      local_10 = uVar2;
    }
    puVar1 = (undefined4 *)(iVar3 + 0x28);
    if (puVar1 != &local_c) {
      uVar2 = *puVar1;
      *puVar1 = local_c;
      local_c = uVar2;
    }
    puVar1 = (undefined4 *)(iVar3 + 0x2c);
    if (puVar1 != &local_8) {
      uVar2 = *puVar1;
      *puVar1 = local_8;
      local_8 = uVar2;
    }
    FUN_0043a78b();
  }
  *(undefined4 *)(iVar3 + 0x10) = param_3;
  *(undefined4 *)(iVar3 + 0x14) = param_4;
  *(undefined4 *)(iVar3 + 0x18) = param_5;
  return iVar3;
}

