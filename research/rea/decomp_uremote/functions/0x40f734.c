// rea decompile_all
// name: FUN_0040f734
// address: 0x40f734
// body: available
// range: 0x40f734-0x40f80c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040f734(undefined4 param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint *unaff_ESI;
  int unaff_EDI;
  int iVar5;
  int local_8;
  
  local_8 = 0;
  if (unaff_EDI == 0) {
    iVar5 = 0x23;
  }
  else {
    if (unaff_ESI != (uint *)0x0) {
      iVar5 = *(int *)(unaff_EDI + 0x60);
      *unaff_ESI = 0;
      unaff_ESI[1] = 0;
      pcVar2 = *(code **)(*(int *)(iVar5 + 0xc) + 0x54);
      if (pcVar2 != (code *)0x0) {
        local_8 = (*pcVar2)();
        if ((local_8 == 0) && (param_3 != 2)) {
          uVar3 = thunk_FUN_00401000(*unaff_ESI,*(undefined4 *)(*(int *)(unaff_EDI + 0x58) + 0x10));
          *unaff_ESI = uVar3;
          uVar3 = thunk_FUN_00401000(unaff_ESI[1],*(undefined4 *)(*(int *)(unaff_EDI + 0x58) + 0x14)
                                    );
          unaff_ESI[1] = uVar3;
          if (param_3 != 1) {
            uVar1 = *(ushort *)(*(int *)(unaff_EDI + 0x58) + 0xc);
            if (uVar1 < 0x19) {
              uVar4 = FUN_0040d230(uVar1,uVar3);
              *unaff_ESI = uVar4;
            }
            uVar1 = *(ushort *)(*(int *)(unaff_EDI + 0x58) + 0xe);
            if (uVar1 < 0x19) {
              uVar3 = FUN_0040d230(uVar1,uVar3);
              unaff_ESI[1] = uVar3;
            }
            *unaff_ESI = *unaff_ESI + 0x20 & 0xffffffc0;
            unaff_ESI[1] = unaff_ESI[1] + 0x20 & 0xffffffc0;
          }
        }
      }
      return local_8;
    }
    iVar5 = 6;
  }
  return iVar5;
}

