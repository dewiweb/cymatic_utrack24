// rea decompile_all
// name: FUN_00424851
// address: 0x424851
// body: available
// range: 0x424851-0x4248b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00424851(int param_1,uint param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((param_4 == (undefined4 *)0x0) || (param_5 == (uint *)0x0)) {
    uVar3 = 6;
  }
  else {
    if (param_3 == (undefined4 *)0x0) {
      uVar1 = (uint)*(ushort *)(param_1 + 0x98);
    }
    else {
      if (*(ushort *)(param_1 + 0x98) <= param_2) {
        return 0x8e;
      }
      piVar2 = (int *)(param_1 + 0x9c);
      iVar4 = param_2 * 0x10;
      *param_3 = *(undefined4 *)(iVar4 + *piVar2);
      *param_4 = *(undefined4 *)(*piVar2 + 8 + iVar4);
      uVar1 = *(uint *)(*piVar2 + 0xc + iVar4);
    }
    *param_5 = uVar1;
    uVar3 = 0;
  }
  return uVar3;
}

