// rea decompile_all
// name: __security_check_cookie
// address: 0x5ac303
// body: available
// range: 0x5ac303-0x5ac311 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  HANDLE hProcess;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined4 unaff_retaddr;
  UINT uExitCode;
  int iStack_32c;
  undefined4 uStack_328;
  
  if (param_1 == DAT_00955fd4) {
    return;
  }
  _DAT_0095cb68 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&iStack_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&iStack_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_0095cb6c = &stack0x00000004;
  _DAT_0095caa8 = 0x10001;
  _DAT_0095ca50 = 0xc0000409;
  _DAT_0095ca54 = 1;
  iStack_32c = DAT_00955fd4;
  uStack_328 = DAT_00955fd8;
  _DAT_0095ca5c = unaff_retaddr;
  _DAT_0095cb34 = in_GS;
  _DAT_0095cb38 = in_FS;
  _DAT_0095cb3c = in_ES;
  _DAT_0095cb40 = in_DS;
  _DAT_0095cb44 = unaff_EDI;
  _DAT_0095cb48 = unaff_ESI;
  _DAT_0095cb4c = unaff_EBX;
  _DAT_0095cb50 = param_2;
  _DAT_0095cb54 = param_1;
  _DAT_0095cb58 = in_EAX;
  _DAT_0095cb5c = unaff_EBP;
  DAT_0095cb60 = unaff_retaddr;
  _DAT_0095cb64 = in_CS;
  _DAT_0095cb70 = in_SS;
  DAT_0095caa0 = IsDebuggerPresent();
  FUN_005b9e5d(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_005f07fc);
  if (DAT_0095caa0 == 0) {
    FUN_005b9e5d(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}

