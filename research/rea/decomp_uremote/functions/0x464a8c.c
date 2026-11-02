// rea decompile_all
// name: FUN_00464a8c
// address: 0x464a8c
// body: available
// range: 0x464a8c-0x464b4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00464a8c(uint param_1,int param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  size_t _Size;
  void *_Memory;
  undefined4 uVar4;
  uint uVar5;
  int *in_ECX;
  bool bVar6;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005d997f;
  local_14 = ExceptionList;
  uVar3 = DAT_00955fd4 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_14;
  if ((-1 < param_2) && ((0 < param_2 || (param_1 != 0)))) {
    _Size = FUN_004706ab(param_1,param_2,0x4000,0,uVar3);
    _Memory = _malloc(_Size);
    local_c = 0;
    while( true ) {
      cVar2 = (**(code **)(*in_ECX + 8))();
      if (cVar2 != '\0') break;
      iVar1 = *in_ECX;
      uVar4 = FUN_004706ab(param_1,param_2,_Size,(int)_Size >> 0x1f,uVar3);
      uVar5 = (**(code **)(iVar1 + 0xc))(_Memory,uVar4);
      bVar6 = param_1 < uVar5;
      param_1 = param_1 - uVar5;
      param_2 = (param_2 - ((int)uVar5 >> 0x1f)) - (uint)bVar6;
      if ((param_2 < 1) && ((param_2 < 0 || (param_1 == 0)))) break;
    }
    local_c = 0xffffffff;
    _free(_Memory);
  }
  ExceptionList = local_14;
  return;
}

