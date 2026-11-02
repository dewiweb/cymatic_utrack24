// rea decompile_all
// name: FUN_0043c8df
// address: 0x43c8df
// body: available
// range: 0x43c8df-0x43ca8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043c8df(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int in_ECX;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de620;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0044bfc5();
  FUN_004d076d();
  FUN_0047d23a();
  FUN_005b3fb0();
  FUN_00439b17();
  FUN_0044bfc5();
  FUN_004d076d();
  FUN_0047cda7();
  FUN_0044bfc5();
  FUN_0047d535((float)local_48,(float)local_44,(float)local_40,(float)local_3c);
  if (*(int *)(in_ECX + 0x730) == 3) {
    iVar3 = FUN_00467ec4();
    iVar3 = iVar3 - *(int *)(in_ECX + 0x744);
    fVar1 = (float)iVar3;
    if (iVar3 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    FUN_004d076d();
    FUN_0047cda7();
    FUN_0047888f();
    local_c = 0;
    fVar2 = (float)*(int *)(in_ECX + 0x39c);
    FUN_004797e4((float)(*(int *)(in_ECX + 0x390) + *(int *)(in_ECX + 0x39c) * -2),
                 (float)*(int *)(in_ECX + 0x394),fVar2,fVar2,0,(fVar1 / 5000.0) * 6.2831855);
    FUN_0047d2ae(local_38);
    FUN_004f7994();
  }
  ExceptionList = local_14;
  return;
}

