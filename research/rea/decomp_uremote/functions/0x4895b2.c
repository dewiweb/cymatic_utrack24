// rea decompile_all
// name: FUN_004895b2
// address: 0x4895b2
// body: available
// range: 0x4895b2-0x489620 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x48961c to 0x4890da FUN_004890da (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004895b2(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EDI;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(unaff_EDI + 4))();
  *(undefined4 **)(unaff_EDI + 0x1a0) = puVar1;
  *puVar1 = &LAB_0048918a;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[10] = *(int *)(unaff_EDI + 100) * *(int *)(unaff_EDI + 0x5c);
  if (*(int *)(unaff_EDI + 0x114) == 2) {
    puVar1[1] = FUN_0048919f;
    puVar1[3] = FUN_004893cc;
    uVar2 = (**(code **)(*(int *)(unaff_EDI + 4) + 4))();
    puVar1[8] = uVar2;
  }
  else {
    puVar1[8] = 0;
    puVar1[1] = FUN_00489245;
    puVar1[3] = FUN_00489276;
  }
  FUN_004890da();
  return;
}

