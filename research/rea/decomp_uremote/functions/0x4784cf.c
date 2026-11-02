// rea decompile_all
// name: FUN_004784cf
// address: 0x4784cf
// body: available
// range: 0x4784cf-0x478555 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004784cf(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_004a4c72(&local_14);
  if ((0 < local_c) && (0 < local_8)) {
    iVar2 = local_10 - *(int *)(unaff_ESI + 8);
    local_28 = 0;
    local_2c = local_14 << 8;
    iVar1 = iVar2 + local_8;
    local_24 = (local_14 + local_c) * 0x100;
    local_18 = 0;
    local_38 = 4;
    local_34 = 0x80000000;
    local_30 = 0xff;
    local_20 = 0xff;
    local_1c = 0x7fffffff;
    for (; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      FUN_0047810a(iVar2,&local_38);
    }
    *(undefined1 *)(unaff_ESI + 0x1c) = 1;
  }
  return;
}

