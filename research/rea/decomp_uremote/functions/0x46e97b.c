// rea decompile_all
// name: FUN_0046e97b
// address: 0x46e97b
// body: available
// range: 0x46e97b-0x46ea26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0046e97b(undefined4 param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  _Locimp *p_Var3;
  facet *this;
  int *piVar4;
  int unaff_EDI;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x46e987;
  uStack_24 = 4;
  *(undefined4 *)(unaff_EDI + 0x24) = 0;
  *(undefined4 *)(unaff_EDI + 4) = 0;
  *(undefined4 *)(unaff_EDI + 0xc) = 0;
  *(undefined4 *)(unaff_EDI + 0x10) = 0x201;
  *(undefined4 *)(unaff_EDI + 0x14) = 6;
  *(undefined4 *)(unaff_EDI + 0x18) = 0;
  *(undefined4 *)(unaff_EDI + 0x1c) = 0;
  *(undefined4 *)(unaff_EDI + 0x20) = 0;
  *(undefined4 *)(unaff_EDI + 8) = 0;
  uStack_28 = 0x46e9b3;
  puVar2 = (undefined4 *)FUN_005af82d();
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uStack_24 = 0x46e9bf;
    p_Var3 = std::locale::_Init();
    *puVar2 = p_Var3;
    uStack_24 = 0x46e9c6;
    this = (facet *)FUN_005ccf82();
    uStack_24 = 0x46e9cd;
    std::locale::facet::_Incref(this);
  }
  *(undefined4 **)(unaff_EDI + 0x24) = puVar2;
  *(undefined4 *)(unaff_EDI + 0x28) = param_1;
  *(undefined4 *)(unaff_EDI + 0x2c) = 0;
  uStack_24 = 0x46e9e9;
  uStack_24 = FUN_00460724();
  local_8 = 0;
  uStack_28 = 0x46e9f2;
  piVar4 = (int *)FUN_00470183();
  local_8 = 0xffffffff;
  uStack_24 = 0x46ea01;
  std::locale::~locale((locale *)&param_1);
  uStack_24 = 0x20;
  puVar2 = &uStack_28;
  uStack_28 = 0x46ea0a;
  uVar1 = (**(code **)(*piVar4 + 0x18))();
  *(undefined1 *)(unaff_EDI + 0x30) = uVar1;
  if (*(int *)(unaff_EDI + 0x28) == 0) {
    puVar2[-1] = 0;
    puVar2[-2] = 4;
    puVar2[-3] = 0x46ea1c;
    FUN_0046dff2();
  }
  *(undefined4 *)(unaff_EDI + 4) = 0;
  puVar2[-1] = 0x46ea24;
  return;
}

