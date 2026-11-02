// rea decompile_all
// name: FUN_0040daa6
// address: 0x40daa6
// body: available
// range: 0x40daa6-0x40db0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040daa6(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *unaff_EBX;
  int local_8;
  
  local_8 = 0;
  puVar1 = *(undefined4 **)(unaff_EBX[1] + 0x60);
  iVar2 = puVar1[3];
  *unaff_EBX = puVar1[1];
  uVar3 = FUN_00411912(0x28,&local_8);
  iVar5 = local_8;
  if (local_8 == 0) {
    unaff_EBX[0x27] = uVar3;
    if (((*(uint *)*puVar1 & 0x200) == 0) && (iVar4 = FUN_0040d5b8(uVar3), iVar5 = 0, iVar4 != 0)) {
      return iVar4;
    }
    if (*(code **)(iVar2 + 0x40) != (code *)0x0) {
      iVar5 = (**(code **)(iVar2 + 0x40))();
    }
  }
  return iVar5;
}

