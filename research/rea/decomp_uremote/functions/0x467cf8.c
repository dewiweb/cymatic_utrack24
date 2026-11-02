// rea decompile_all
// name: FUN_00467cf8
// address: 0x467cf8
// body: available
// range: 0x467cf8-0x467e6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00467cf8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong *in_ECX;
  int iVar5;
  __time64_t _Var6;
  longlong lVar7;
  tm local_2c;
  
  if (param_1 - 0x7b3U < 0x43) {
    local_2c.tm_isdst = -1;
    local_2c.tm_mon = param_2;
    local_2c.tm_mday = param_3;
    local_2c.tm_hour = param_4;
    local_2c.tm_min = param_5;
    local_2c.tm_sec = param_6;
    local_2c.tm_year = param_1 + -0x76c;
    _Var6 = __mktime64(&local_2c);
    lVar7 = __allmul(_Var6,1000,0);
    *in_ECX = lVar7;
    if (((int)((ulonglong)lVar7 >> 0x20) < 1) && (lVar7 < 0)) {
      *(undefined4 *)in_ECX = 0;
      *(undefined4 *)((int)in_ECX + 4) = 0;
    }
  }
  else {
    puVar2 = (undefined4 *)FUN_00467cf8(0x7b3,0,1,0,0,0,0,1);
    iVar3 = __alldiv(*puVar2,puVar2[1],1000,0);
    iVar4 = (0xd - param_2) / 0xc;
    iVar5 = (param_1 - iVar4) + 0x12c0;
    uVar1 = ((int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2) + -0x7d2d +
            ((((iVar4 * 0xc + param_2) * 0x99 + -0x130) / 5 + iVar5 / 400 + iVar5 * 0x16d) -
            iVar5 / 100) + param_3;
    lVar7 = __allmul(uVar1 - 0x253d8c,((int)uVar1 >> 0x1f) - (uint)(uVar1 < 0x253d8c),0x15180,0);
    lVar7 = __allmul(lVar7 + (((param_4 * 0x3c + param_5) * 0x3c - (0x1e13380 - iVar3)) + param_6),
                     1000,0);
    *in_ECX = lVar7;
  }
  return;
}

