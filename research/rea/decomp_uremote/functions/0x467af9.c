// rea decompile_all
// name: FUN_00467af9
// address: 0x467af9
// body: available
// range: 0x467af9-0x467c99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00467b50) */

void FUN_00467af9(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  tm *unaff_ESI;
  int iVar6;
  longlong local_c;
  
  local_c = __alldiv(param_1,param_2,1000,0);
  if (((int)((ulonglong)(local_c + -0x15180) >> 0x20) == 0) &&
     ((uint)(local_c + -0x15180) < 0x7fe6c600)) {
    if ((local_c < 0) || (0x793406fff < local_c)) {
      _memset(unaff_ESI,0,0x24);
    }
    else {
      __localtime64_s(unaff_ESI,&local_c);
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_00467cf8(0x7b3,0,1,0,0,0,0,1);
    iVar2 = __alldiv(*puVar1,puVar1[1],1000,0);
    iVar2 = __alldvrm(local_c + (0x1e13380 - iVar2) + 0x3118a41200,0x15180,0);
    iVar3 = ((iVar2 + 0x7d2c) * 4 + 3) / 0x23ab1;
    iVar4 = iVar3 * 0x23ab1;
    iVar6 = (iVar2 + 0x7d2c) - ((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2);
    iVar4 = (iVar6 * 4 + 3) / 0x5b5;
    iVar5 = iVar4 * 0x5b5;
    iVar6 = iVar6 - ((int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2);
    iVar5 = (iVar6 * 5 + 2) / 0x99;
    unaff_ESI->tm_mday = (iVar6 - (iVar5 * 0x99 + 2) / 5) + 1;
    unaff_ESI->tm_year = (iVar3 + -0x43) * 100 + iVar5 / 10 + iVar4;
    unaff_ESI->tm_yday = -1;
    unaff_ESI->tm_mon = iVar5 + (iVar5 / 10) * -0xc + 2;
    unaff_ESI->tm_wday = (iVar2 + 1) % 7;
    unaff_ESI->tm_hour = extraout_ECX / 0xe10;
    unaff_ESI->tm_isdst = -1;
    unaff_ESI->tm_min = (extraout_ECX % 0xe10) / 0x3c;
    unaff_ESI->tm_sec = (extraout_ECX % 0xe10) % 0x3c;
  }
  return;
}

