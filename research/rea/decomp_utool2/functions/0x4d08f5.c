// rea decompile_all
// name: FUN_004d08f5
// address: 0x4d08f5
// body: available
// range: 0x4d08f5-0x4d0a42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4d0a42 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d08f5(int *param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  DWORD DVar6;
  uint uVar7;
  undefined8 uVar8;
  uint local_c0;
  int local_bc;
  int local_b8;
  _TIME_ZONE_INFORMATION local_b4;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (param_1 == (int *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_004d0d1c();
  }
  else {
    ___tzset();
    local_b8 = 0;
    iVar4 = FUN_004d0af5(&local_b8);
    if (iVar4 != 0) {
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(short *)((int)param_1 + 10) = (short)(local_b8 / 0x3c);
    ___acrt_GetSystemTimePreciseAsFileTime_4(&local_c0);
    iVar4 = local_bc;
    uVar7 = local_c0;
    iVar5 = __aulldiv(local_c0,local_bc,600000000,0);
    if (iVar5 != DAT_00c89fc8) {
      DVar6 = GetTimeZoneInformation(&local_b4);
      DAT_00c761dc = 0xffffffff;
      uVar7 = local_c0;
      iVar4 = local_bc;
      DAT_00c89fc8 = iVar5;
      if (DVar6 != 0xffffffff) {
        if (((DVar6 == 2) && (local_b4.DaylightDate.wMonth != 0)) && (local_b4.DaylightBias != 0)) {
          DAT_00c761dc = 1;
        }
        else {
          DAT_00c761dc = 0;
        }
      }
    }
    *(short *)(param_1 + 3) = (short)DAT_00c761dc;
    uVar8 = __aulldiv(uVar7,iVar4,10000,0);
    uVar2 = __aullrem(uVar8,1000,0);
    *(undefined2 *)(param_1 + 2) = uVar2;
    iVar4 = __aulldiv(uVar7 + 0x2ac18000,iVar4 + -0x19db1df + (uint)(0xd53e7fff < uVar7),
                      &DAT_00989680,0);
    *param_1 = iVar4;
    param_1[1] = iVar4 >> 0x1f;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

