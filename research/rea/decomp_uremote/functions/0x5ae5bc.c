// rea decompile_all
// name: _malloc
// address: 0x5ae5bc
// body: available
// range: 0x5ae5bc-0x5ae685 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2008 Release */

void * __cdecl _malloc(size_t _Size)

{
  LPVOID pvVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  uint dwBytes;
  
  if (_Size < 0xffffffe1) {
    do {
      if (DAT_0095cd74 == (HANDLE)0x0) {
        __FF_MSGBANNER();
        __NMSG_WRITE(0x1e);
        ___crtExitProcess(0xff);
      }
      if (DAT_0095de2c == 1) {
        dwBytes = _Size;
        if (_Size == 0) {
          dwBytes = 1;
        }
LAB_005ae62b:
        pvVar1 = HeapAlloc(DAT_0095cd74,0,dwBytes);
      }
      else if ((DAT_0095de2c != 3) || (pvVar1 = (LPVOID)_V6_HeapAlloc(_Size), pvVar1 == (LPVOID)0x0)
              ) {
        sVar4 = _Size;
        if (_Size == 0) {
          sVar4 = 1;
        }
        dwBytes = sVar4 + 0xf & 0xfffffff0;
        goto LAB_005ae62b;
      }
      if (pvVar1 != (LPVOID)0x0) {
        return pvVar1;
      }
      if (DAT_0095d218 == 0) {
        piVar3 = __errno();
        *piVar3 = 0xc;
        break;
      }
      iVar2 = __callnewh(_Size);
    } while (iVar2 != 0);
    piVar3 = __errno();
    *piVar3 = 0xc;
  }
  else {
    __callnewh(_Size);
    piVar3 = __errno();
    *piVar3 = 0xc;
  }
  return (void *)0x0;
}

