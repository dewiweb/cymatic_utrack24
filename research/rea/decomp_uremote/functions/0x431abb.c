// rea decompile_all
// name: FUN_00431abb
// address: 0x431abb
// body: available
// range: 0x431abb-0x431b94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00431abb(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_ESI;
  int *unaff_EDI;
  undefined1 local_5e8 [40];
  int local_5c0;
  undefined1 local_5a4;
  undefined1 local_5a2;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_18;
  undefined4 local_14;
  int local_c;
  int local_8;
  
  local_c = *(int *)(unaff_ESI + 0x1e8);
  puVar1 = *(undefined4 **)(local_c + 0xc);
  *unaff_EDI = 0;
  iVar2 = (*(code *)*puVar1)(local_5e8);
  if (iVar2 == 0) {
    iVar2 = *(int *)(unaff_ESI + 0x1a0);
    local_94 = *(undefined4 *)(unaff_ESI + 0x194);
    local_90 = *(undefined4 *)(unaff_ESI + 0x198);
    local_8c = *(undefined4 *)(unaff_ESI + 0x19c);
    local_18 = *(undefined4 *)(unaff_ESI + 0x224);
    local_14 = *(undefined4 *)(unaff_ESI + 0x220);
    local_5a2 = 1;
    local_5a4 = 0;
    *unaff_EDI = 0;
    local_8 = 0;
    if (0 < iVar2) {
      do {
        FUN_00431a77(local_5e8,local_8);
        if ((local_8 == 0) || (*unaff_EDI < local_5c0)) {
          *unaff_EDI = local_5c0;
        }
        local_8 = local_8 + 1;
      } while (local_8 < *(int *)(unaff_ESI + 0x1a0));
    }
    (**(code **)(*(int *)(local_c + 0xc) + 4))(local_5e8);
    iVar2 = 0;
  }
  return iVar2;
}

