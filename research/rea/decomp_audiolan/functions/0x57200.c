// rea decompile_all
// name: FUN_00057200
// address: 0x57200
// body: available
// range: 0x57200-0x572cb inclusive
// range: 0x18673c-0x186743 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x001867a2) */
/* WARNING: Removing unreachable block (ram,0x001867e4) */
/* WARNING: Removing unreachable block (ram,0x001867ec) */
/* WARNING: Removing unreachable block (ram,0x001867fc) */
/* WARNING: Removing unreachable block (ram,0x0018683a) */
/* WARNING: Removing unreachable block (ram,0x00186842) */
/* WARNING: Removing unreachable block (ram,0x00186848) */
/* WARNING: Removing unreachable block (ram,0x0018685a) */
/* WARNING: Removing unreachable block (ram,0x00186860) */
/* WARNING: Removing unreachable block (ram,0x00186866) */
/* WARNING: Removing unreachable block (ram,0x00186870) */
/* WARNING: Removing unreachable block (ram,0x00186882) */
/* WARNING: Removing unreachable block (ram,0x00186888) */
/* WARNING: Removing unreachable block (ram,0x0018689e) */
/* WARNING: Removing unreachable block (ram,0x001868b2) */
/* WARNING: Removing unreachable block (ram,0x001868c0) */
/* WARNING: Removing unreachable block (ram,0x00186966) */
/* WARNING: Removing unreachable block (ram,0x001868ce) */
/* WARNING: Removing unreachable block (ram,0x001868de) */
/* WARNING: Removing unreachable block (ram,0x0018697c) */
/* WARNING: Removing unreachable block (ram,0x0018699e) */
/* WARNING: Removing unreachable block (ram,0x001869aa) */
/* WARNING: Removing unreachable block (ram,0x001869a6) */
/* WARNING: Removing unreachable block (ram,0x001869ae) */
/* WARNING: Removing unreachable block (ram,0x001868f0) */
/* WARNING: Removing unreachable block (ram,0x001869c0) */
/* WARNING: Removing unreachable block (ram,0x001868fc) */
/* WARNING: Removing unreachable block (ram,0x00186902) */
/* WARNING: Removing unreachable block (ram,0x0018691c) */
/* WARNING: Removing unreachable block (ram,0x0018691e) */
/* WARNING: Removing unreachable block (ram,0x0018692c) */
/* WARNING: Removing unreachable block (ram,0x00186932) */
/* WARNING: Removing unreachable block (ram,0x0018696e) */
/* WARNING: Removing unreachable block (ram,0x00186936) */
/* WARNING: Removing unreachable block (ram,0x0018694e) */
/* WARNING: Removing unreachable block (ram,0x00186954) */
/* WARNING: Removing unreachable block (ram,0x0018695a) */
/* WARNING: Removing unreachable block (ram,0x00186964) */
/* WARNING: Removing unreachable block (ram,0x001869c6) */
/* WARNING: Removing unreachable block (ram,0x001869da) */
/* WARNING: Removing unreachable block (ram,0x001869e0) */
/* WARNING: Removing unreachable block (ram,0x00186940) */
/* WARNING: Removing unreachable block (ram,0x001869ea) */
/* WARNING: Removing unreachable block (ram,0x001869fa) */
/* WARNING: Removing unreachable block (ram,0x00186a02) */
/* WARNING: Removing unreachable block (ram,0x00186a08) */
/* WARNING: Removing unreachable block (ram,0x00186a0c) */
/* WARNING: Removing unreachable block (ram,0x00186a1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00057200(int param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined1 auStack_3c [24];
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 local_18;
  char *pcVar4;
  
  uStack_24 = *(undefined4 *)(param_1 + 0x114);
  if (*(int *)(*param_4 + -4) != 0) {
    local_18 = 0;
    iVar2 = FUN_001863a0(uStack_24,param_2,param_3,&local_18);
    pcVar4 = _DAT_000572cc;
    if (iVar2 == 0) {
      iVar2 = FUN_001a5af4(local_18,*param_4,*(undefined4 *)(*param_4 + -4));
      if (iVar2 == 0) {
        iVar2 = FUN_001a6054(local_18,s_Supported_00057318,s_timer_00057310);
        pcVar4 = _DAT_00057324;
        if ((iVar2 == 0) &&
           (iVar2 = FUN_001a5ec0(local_18,s_n__application_sdp_00057325 + 3), pcVar4 = DAT_00057338,
           iVar2 == 0)) {
          uVar3 = FUN_00186744(*(undefined4 *)(param_1 + 0x114),param_2,param_3,local_18);
          return uVar3;
        }
      }
      else {
        pcVar4 = s_o__ERROR__SIPHandler__doSendAnsw_000572cd + 3;
      }
    }
    uVar3 = FUN_000028a4(pcVar4);
    return uVar3;
  }
  local_18 = 0;
  iStack_48 = 0;
  uStack_44 = 0;
  iStack_40 = 0;
  iStack_20 = param_2;
  iStack_1c = param_3;
  if (((-1 < param_2) && (100 < param_3)) && (param_3 <= DAT_00186a44)) {
    if (((param_2 < 1) ||
        (FUN_001726b2(uStack_24,param_2,&uStack_44,&iStack_48,&iStack_40), iStack_48 == 0)) ||
       ((iStack_40 == 0 ||
        ((*(int *)(iStack_40 + 0x20) == 0 ||
         (iVar2 = *(int *)(*(int *)(iStack_40 + 0x20) + 8), iVar2 == 0)))))) {
      FUN_001a52e0(0);
      return 0xfffffffa;
    }
    iVar2 = FUN_001a6f04(iVar2,s_INVITE_00186a48);
    if ((iVar2 != 0) || (99 < param_3 - 200U)) {
      cVar1 = *(char *)(iStack_40 + 0x2c);
      if (((cVar1 == '\a') || (((cVar1 == '\b' || (cVar1 == '\t')) || (cVar1 == '\x12')))) ||
         (cVar1 == '\x13')) {
        FUN_001a52e0(0);
        return 0xfffffffd;
      }
      iVar2 = FUN_001a6f04(*(undefined4 *)(*(int *)(iStack_40 + 0x20) + 8),s_INVITE_00186a48);
      if (iVar2 == 0) {
        uVar3 = FUN_0017184c(uStack_24,uStack_44,iStack_48,param_3,auStack_3c,1);
        return uVar3;
      }
    }
    FUN_001a52e0(0);
    return 0xfffffffe;
  }
  FUN_001a52e0(0);
  return 0xfffffffe;
}

