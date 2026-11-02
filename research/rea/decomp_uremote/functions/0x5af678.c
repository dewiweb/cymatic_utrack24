// rea decompile_all
// name: __onexit_nolock
// address: 0x5af678
// body: available
// range: 0x5af678-0x5af731 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __onexit_nolock
   
   Library: Visual Studio 2008 Release */

undefined4 __onexit_nolock(undefined4 param_1)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  size_t sVar2;
  size_t sVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  
  _Memory = (undefined4 *)__decode_pointer(DAT_0095de08);
  puVar1 = (undefined4 *)__decode_pointer(DAT_0095de04);
  if ((puVar1 < _Memory) || (iVar6 = (int)puVar1 - (int)_Memory, iVar6 + 4U < 4)) {
    return 0;
  }
  sVar2 = __msize(_Memory);
  if (sVar2 < iVar6 + 4U) {
    sVar3 = 0x800;
    if (sVar2 < 0x800) {
      sVar3 = sVar2;
    }
    if ((sVar3 + sVar2 < sVar2) ||
       (pvVar4 = __realloc_crt(_Memory,sVar3 + sVar2), pvVar4 == (void *)0x0)) {
      if (sVar2 + 0x10 < sVar2) {
        return 0;
      }
      pvVar4 = __realloc_crt(_Memory,sVar2 + 0x10);
      if (pvVar4 == (void *)0x0) {
        return 0;
      }
    }
    puVar1 = (undefined4 *)((int)pvVar4 + (iVar6 >> 2) * 4);
    DAT_0095de08 = __encode_pointer(pvVar4);
  }
  uVar5 = __encode_pointer(param_1);
  *puVar1 = uVar5;
  DAT_0095de04 = __encode_pointer(puVar1 + 1);
  return param_1;
}

