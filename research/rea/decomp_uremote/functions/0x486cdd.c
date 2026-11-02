// rea decompile_all
// name: FUN_00486cdd
// address: 0x486cdd
// body: available
// range: 0x486cdd-0x486d6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00486cdd(void)

{
  int iVar1;
  uint uVar2;
  void *_Dst;
  int *unaff_ESI;
  int local_c;
  int *local_8;
  
  local_c = 0;
  if (0 < unaff_ESI[0x49]) {
    local_8 = unaff_ESI + 0x4a;
    do {
      iVar1 = *local_8;
      if (*(int *)(iVar1 + 0x4c) == 0) {
        uVar2 = *(uint *)(iVar1 + 0x10);
        if ((3 < uVar2) || (unaff_ESI[uVar2 + 0x24] == 0)) {
          *(undefined4 *)(*unaff_ESI + 0x14) = 0x34;
          *(uint *)(*unaff_ESI + 0x18) = uVar2;
          (**(code **)*unaff_ESI)();
        }
        _Dst = (void *)(**(code **)unaff_ESI[1])();
        _memcpy(_Dst,(void *)unaff_ESI[uVar2 + 0x24],0x82);
        *(void **)(iVar1 + 0x4c) = _Dst;
      }
      local_c = local_c + 1;
      local_8 = local_8 + 1;
    } while (local_c < unaff_ESI[0x49]);
  }
  return;
}

