// rea decompile_all
// name: _fabs
// address: 0x5af9f1
// body: available
// range: 0x5af9f1-0x5afaaa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _fabs
   
   Library: Visual Studio 2008 Release */

double __cdecl _fabs(double _X)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  undefined8 local_c;
  
  uVar1 = __ctrlfp(0x133f,0xffff);
  if ((_X._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar2 = __sptype(_X);
    if (iVar2 == 1) {
      __ctrlfp(uVar1,0xffff);
      fVar3 = (float10)_X;
    }
    else if (iVar2 == 2) {
      __ctrlfp(uVar1,0xffff);
      fVar3 = -(float10)_X;
    }
    else if (iVar2 == 3) {
      fVar3 = (float10)__handle_qnan1();
    }
    else {
      fVar3 = (float10)__except1(8,0x15,_X,_X + 1.0,uVar1);
    }
  }
  else {
    local_c = ABS(_X);
    __ctrlfp(uVar1,0xffff);
    fVar3 = (float10)local_c;
  }
  return (double)fVar3;
}

