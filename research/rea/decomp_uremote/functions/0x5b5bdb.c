// rea decompile_all
// name: ___sbh_alloc_new_region
// address: 0x5b5bdb
// body: available
// range: 0x5b5bdb-0x5b5c8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2008 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_0095de14 == DAT_0095de24) {
    pvVar1 = HeapReAlloc(DAT_0095cd74,0,DAT_0095de18,(DAT_0095de24 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_0095de24 = DAT_0095de24 + 0x10;
    DAT_0095de18 = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_0095de14 * 0x14 + (int)DAT_0095de18);
  pvVar1 = HeapAlloc(DAT_0095cd74,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_0095de14 = DAT_0095de14 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_0095cd74,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}

