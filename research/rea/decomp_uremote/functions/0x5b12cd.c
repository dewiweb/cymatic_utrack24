// rea decompile_all
// name: __byteswap_uint64
// address: 0x5b12cd
// body: available
// range: 0x5b12cd-0x5b1382 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __byteswap_uint64
   
   Library: Visual Studio 2008 Release */

ulonglong __cdecl __byteswap_uint64(ulonglong _Int64)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  lVar6 = __allmul(_Int64,0x10000,0);
  lVar6 = __allmul(lVar6 + (_Int64 & 0xff00),0x10000,0);
  lVar6 = __allmul(lVar6 + (ulonglong)((uint)_Int64 & 0xff0000),0x10000,0);
  uVar7 = __allmul(lVar6 + (ulonglong)((uint)_Int64 & 0xff000000),0x100,0);
  uVar5 = _Int64._4_4_ >> 8 & 0xff00;
  uVar1 = (uint)uVar7 + uVar5;
  uVar2 = uVar1 + _Int64._4_4_ * 0x1000000;
  uVar4 = (int)((_Int64 & 0xff000000ff00) >> 0x20) * 0x100;
  uVar3 = uVar2 + uVar4;
  return CONCAT44((int)((ulonglong)uVar7 >> 0x20) + (uint)CARRY4((uint)uVar7,uVar5) +
                  (uint)CARRY4(uVar1,_Int64._4_4_ * 0x1000000) + (uint)CARRY4(uVar2,uVar4) +
                  (uint)CARRY4(uVar3,_Int64._4_4_ >> 0x18),uVar3 + (_Int64._4_4_ >> 0x18));
}

