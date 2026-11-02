// rea decompile_all
// name: FUN_004f3022
// address: 0x4f3022
// body: available
// range: 0x4f3022-0x4f30ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004f3022(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  void *_Memory;
  int in_ECX;
  void *pvVar6;
  
  iVar2 = param_1;
  if ((*(byte *)(in_ECX + 8) & 4) != 0) {
    GetParent(*(HWND *)(in_ECX + 0x38));
    iVar4 = FUN_004f1ae2();
    if ((iVar4 != 0) && (iVar4 != in_ECX)) {
      uVar5 = FUN_004f3022(param_1,param_2);
      return uVar5;
    }
  }
  _Memory = _malloc(param_1 * 0x28);
  iVar4 = (*DAT_0095d6b0)(param_2,param_1,_Memory,0x28);
  if ((iVar4 != 0) && (param_1 = 0, pvVar6 = _Memory, 0 < iVar2)) {
    do {
      uVar1 = *(uint *)((int)pvVar6 + 0x10);
      if (((uVar1 & 7) != 0) &&
         (cVar3 = FUN_004f30ef(in_ECX,(byte)(uVar1 >> 4) & 1,(byte)(uVar1 >> 1) & 1,
                               (byte)(uVar1 >> 2) & 1), cVar3 == '\0')) goto LAB_004f30d8;
      param_1 = param_1 + 1;
      pvVar6 = (void *)((int)pvVar6 + 0x28);
    } while (param_1 < iVar2);
  }
  (*DAT_0095d6b4)(param_2);
LAB_004f30d8:
  _free(_Memory);
  return 0;
}

