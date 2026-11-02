// rea decompile_all
// name: __ftime64_s
// address: 0x5b216e
// body: available
// range: 0x5b216e-0x5b22e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __ftime64_s
   
   Library: Visual Studio 2008 Release */

void __ftime64_s(undefined8 *param_1)

{
  longlong lVar1;
  undefined2 uVar2;
  int *piVar3;
  errno_t eVar4;
  DWORD DVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined8 uVar9;
  _FILETIME local_c0;
  long local_b8;
  _TIME_ZONE_INFORMATION local_b4;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  local_b8 = 0;
  if (param_1 == (undefined8 *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  else {
    ___tzset();
    eVar4 = __get_timezone(&local_b8);
    if (eVar4 != 0) {
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    *(short *)((int)param_1 + 10) = (short)(local_b8 / 0x3c);
    GetSystemTimeAsFileTime(&local_c0);
    DVar7 = local_c0.dwHighDateTime;
    DVar6 = local_c0.dwLowDateTime;
    lVar8 = __aulldiv(local_c0.dwLowDateTime,local_c0.dwHighDateTime,600000000,0);
    lVar1 = CONCAT44(DAT_0095ca2c,DAT_0095ca28);
    if (lVar8 != lVar1) {
      DVar5 = GetTimeZoneInformation(&local_b4);
      DVar6 = local_c0.dwLowDateTime;
      DVar7 = local_c0.dwHighDateTime;
      lVar1 = lVar8;
      if (DVar5 == 0xffffffff) {
        _DAT_00955c40 = 0xffffffff;
      }
      else if (((DVar5 == 2) && (local_b4.DaylightDate.wMonth != 0)) && (local_b4.DaylightBias != 0)
              ) {
        _DAT_00955c40 = 1;
      }
      else {
        _DAT_00955c40 = 0;
      }
    }
    DAT_0095ca2c = (undefined4)((ulonglong)lVar1 >> 0x20);
    DAT_0095ca28 = (undefined4)lVar1;
    *(undefined2 *)((int)param_1 + 0xc) = DAT_00955c40;
    uVar9 = __aulldiv(DVar6,DVar7,10000,0);
    uVar2 = __aullrem(uVar9,1000,0);
    *(undefined2 *)(param_1 + 1) = uVar2;
    uVar9 = __aulldiv(DVar6 + 0x2ac18000,DVar7 + 0xfe624e21 + (uint)(0xd53e7fff < DVar6),
                      &DAT_00989680,0);
    *param_1 = uVar9;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

