// rea decompile_all
// name: FUN_00521900
// address: 0x521900
// body: available
// range: 0x521900-0x52195b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00521900(int param_1,ushort param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_20 [28];
  
  uVar1 = (uint)param_2;
  uVar6 = 5;
  uVar5 = 0x10;
  uVar4 = 0;
  puVar3 = local_20;
  uVar2 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x98))
                    (puVar3,0,0x10,5,uVar1,0);
  uVar2 = FUN_00503c30(uVar2,puVar3);
  FUN_00521580(uVar2,uVar4,uVar5,uVar6,uVar1);
  return;
}

