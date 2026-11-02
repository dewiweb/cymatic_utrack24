// rea decompile_all
// name: FUN_00432516
// address: 0x432516
// body: available
// range: 0x432516-0x4327b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00432516(void)

{
  char *pcVar1;
  char *pcVar2;
  char *_Str1;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int in_ECX;
  int in_EDX;
  int *unaff_EBX;
  char *pcVar8;
  undefined8 uVar9;
  int local_11c;
  int local_118;
  char local_114 [10];
  char local_10a [94];
  undefined1 local_ac [164];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)local_ac;
  _memset(unaff_EBX,0,100);
  (*(code *)**(undefined4 **)(in_EDX + 4))();
  unaff_EBX[0x12] = in_ECX;
  iVar3 = FUN_004d021d();
  iVar4 = FUN_004111b5();
  if (iVar4 != 0) {
LAB_0043279e:
    __security_check_cookie(local_8 ^ (uint)local_ac);
    return;
  }
  iVar5 = _strncmp(*(char **)(in_ECX + 0x20),"%!PS-Adobe-3.0 Resource-CIDFont",0x1f);
  iVar4 = 0;
  if (iVar5 != 0) {
    iVar4 = 2;
  }
  FUN_00411249();
LAB_00432764:
  if (iVar4 == 0) {
    local_118 = 0x10a;
    pcVar8 = local_114;
    local_11c = FUN_004d021d();
    while( true ) {
      uVar9 = FUN_004d021d();
      iVar4 = *(int *)((int)((ulonglong)uVar9 >> 0x20) + 4) - (int)uVar9;
      if (iVar4 == 0) break;
      if (iVar4 <= local_118) {
        local_118 = iVar4;
      }
      iVar4 = FUN_004110b4(pcVar8,local_118);
      if (iVar4 != 0) break;
      if (local_118 < 0x100) {
        pcVar8[local_118] = '\0';
      }
      pcVar1 = local_114;
joined_r0x00432604:
      pcVar2 = pcVar1;
      if (pcVar2 < pcVar8 + local_118 + -10) {
        if ((*pcVar2 != 'S') || (iVar4 = _strncmp(pcVar2,"StartData",9), iVar4 != 0))
        goto LAB_0043261f;
        iVar4 = (local_11c + 10) - (int)local_114;
        goto LAB_0043267e;
      }
      _memmove(local_114,pcVar2,10);
      local_11c = local_11c + 0x100;
      local_118 = 0x100;
      pcVar8 = local_10a;
    }
  }
  goto LAB_0043279e;
LAB_0043261f:
  pcVar1 = pcVar2 + 1;
  if ((*pcVar1 == 's') && (iVar4 = _strncmp(pcVar2,"/sfnts",6), iVar4 == 0)) {
    iVar4 = (local_11c + 7) - (int)local_114;
LAB_0043267e:
    iVar5 = (int)(pcVar2 + iVar4) - iVar3;
    iVar6 = FUN_0041106d();
    if ((iVar6 != 0) || (iVar6 = FUN_0041117c(unaff_EBX + 0x13), iVar6 != 0)) goto LAB_0043279e;
    unaff_EBX[0x18] = -1;
    unaff_EBX[0x15] = (int)(pcVar2 + iVar4);
    pcVar8 = (char *)unaff_EBX[0x13];
    unaff_EBX[0x14] = iVar5;
    unaff_EBX[1] = (int)pcVar8;
    *unaff_EBX = (int)pcVar8;
    unaff_EBX[2] = (int)(pcVar8 + iVar5);
    (*(code *)unaff_EBX[8])();
    (*(code *)unaff_EBX[7])();
    pcVar1 = (char *)*unaff_EBX;
    (*(code *)unaff_EBX[8])();
    (*(code *)unaff_EBX[7])();
    pcVar2 = (char *)unaff_EBX[2];
    _Str1 = (char *)*unaff_EBX;
    goto joined_r0x004326f7;
  }
  goto joined_r0x00432604;
joined_r0x004326f7:
  if (pcVar2 <= _Str1) goto LAB_0043274c;
  if (unaff_EBX[3] != 0) goto LAB_0043279e;
  if ((*_Str1 == 'S') && (iVar4 = _strncmp(_Str1,"StartData",9), iVar4 == 0)) {
    iVar3 = _strncmp(pcVar8,"(Hex)",5);
    if (iVar3 == 0) {
      lVar7 = _atol(pcVar1);
      unaff_EBX[0x16] = lVar7;
    }
    goto LAB_0043279e;
  }
  if ((_Str1[1] == 's') && (iVar4 = _strncmp(_Str1,"/sfnts",6), iVar4 == 0)) goto LAB_0043279e;
  (*(code *)unaff_EBX[8])();
  (*(code *)unaff_EBX[7])();
  pcVar8 = pcVar1;
  pcVar1 = _Str1;
  _Str1 = (char *)*unaff_EBX;
  goto joined_r0x004326f7;
LAB_0043274c:
  FUN_00411199();
  iVar4 = FUN_0041106d();
  goto LAB_00432764;
}

