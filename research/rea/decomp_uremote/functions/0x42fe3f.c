// rea decompile_all
// name: FUN_0042fe3f
// address: 0x42fe3f
// body: available
// range: 0x42fe3f-0x43034f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042fe3f(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *local_3c;
  int local_38;
  int local_34;
  undefined4 *local_30;
  char *local_2c;
  char *local_28;
  int local_24;
  int local_20;
  size_t local_1c;
  int local_18;
  char local_11;
  int local_10;
  undefined1 local_c;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  local_24 = 0;
  local_20 = param_2[4];
  puVar3 = *(undefined4 **)(param_1 + 0x1e8);
  local_34 = param_1;
  local_2c = (char *)param_2[2];
  piVar1 = param_2 + 0x41;
  local_11 = '\0';
  local_30 = puVar3;
  iVar5 = (*(code *)param_2[9])(param_2);
  if ((iVar5 == 0) || (param_2[3] != 0)) goto LAB_00430341;
  if ((param_2[0x26] != 0) ||
     (((iVar6 = (**(code **)*puVar3)(param_2 + 0x34,iVar5 + 6,local_20), iVar6 == 0 &&
       (iVar6 = (**(code **)*local_30)(param_2 + 0x27,iVar5 + 6,local_20), iVar6 == 0)) &&
      (iVar6 = (**(code **)*local_30)(piVar1,4,local_20), iVar6 == 0)))) {
    local_18 = 0;
    while( true ) {
      (*(code *)param_2[7])(param_2);
      pcVar4 = (char *)*param_2;
      if ((local_2c <= pcVar4) ||
         ((pcVar4 + 3 < local_2c &&
          ((((((cVar2 = pcVar4[3], cVar2 == ' ' || (cVar2 == '\r')) ||
              ((cVar2 == '\n' || ((cVar2 == '\t' || (cVar2 == '\f')))))) ||
             ((cVar2 == '\0' ||
              (((((cVar2 == '/' || (cVar2 == '(')) || (cVar2 == ')')) ||
                ((cVar2 == '<' || (cVar2 == '>')))) || (cVar2 == '[')))))) ||
            (((cVar2 == ']' || (cVar2 == '{')) || ((cVar2 == '}' || (cVar2 == '%')))))) &&
           (((((*pcVar4 == 'd' && (pcVar4[1] == 'e')) && (pcVar4[2] == 'f')) && (local_18 != 0)) ||
            (((*pcVar4 == 'e' && (pcVar4[1] == 'n')) && (pcVar4[2] == 'd')))))))))) break;
      (*(code *)param_2[8])(param_2);
      if (param_2[3] != 0) goto LAB_00430341;
      if (*pcVar4 == '/') {
        local_28 = pcVar4 + 1;
        if (local_2c <= local_28) {
LAB_0043033b:
          iVar6 = 3;
          goto LAB_0043033e;
        }
        iVar7 = *param_2 - (int)local_28;
        local_10 = iVar7;
        iVar6 = FUN_0042f79b(&local_1c,&local_3c,*(int *)(*(int *)(local_34 + 0x80) + 0x34) != 0);
        if (iVar6 == 0) goto LAB_00430341;
        if (param_2[0x26] == 0) {
          local_38 = (*(code *)param_2[0x32])(param_2 + 0x27,local_18,local_28,iVar7 + 1);
          iVar7 = local_18;
          iVar6 = local_38;
          if (local_38 != 0) goto LAB_0043033e;
          *(undefined1 *)(local_10 + *(int *)(param_2[0x2d] + local_18 * 4)) = 0;
          if ((*local_28 == '.') &&
             (iVar6 = _strcmp(".notdef",*(char **)(param_2[0x2d] + local_18 * 4)), iVar6 == 0)) {
            local_24 = iVar7;
            local_11 = '\x01';
          }
          if ((*(int *)(local_34 + 0xac) < 0) || (iVar5 + 5 <= iVar7)) {
            iVar6 = (*(code *)param_2[0x3f])(param_2 + 0x34,iVar7,local_3c,local_1c);
          }
          else {
            if ((int)local_1c <= *(int *)(local_34 + 0xac)) goto LAB_0043033b;
            local_28 = (char *)FUN_00411912(local_1c,&local_38);
            iVar6 = local_38;
            if (local_38 != 0) goto LAB_0043033e;
            _memcpy(local_28,local_3c,local_1c);
            pcVar4 = local_28;
            (*(code *)local_30[4])(local_28,local_1c,0x10ea);
            local_1c = local_1c - *(int *)(local_34 + 0xac);
            iVar6 = (*(code *)param_2[0x3f])
                              (param_2 + 0x34,local_18,pcVar4 + *(int *)(local_34 + 0xac),local_1c);
            FUN_00411a5c(local_28);
          }
          if (iVar6 != 0) goto LAB_0043033e;
          local_18 = local_18 + 1;
        }
      }
    }
    param_2[0x26] = local_18;
    if (local_11 == '\0') {
      local_10 = 0xde1f78b;
      local_c = 0xe;
      iVar6 = (*(code *)param_2[0x4c])
                        (piVar1,0,*(undefined4 *)param_2[0x2d],*(undefined4 *)param_2[0x2e]);
      if (((iVar6 == 0) &&
          (iVar6 = (*(code *)param_2[0x4c])
                             (piVar1,1,*(undefined4 *)param_2[0x3a],*(undefined4 *)param_2[0x3b]),
          iVar6 == 0)) &&
         ((iVar6 = (*(code *)param_2[0x32])(param_2 + 0x27,0,".notdef",8), iVar6 == 0 &&
          (((iVar6 = (*(code *)param_2[0x3f])(param_2 + 0x34,0,&local_10,5), iVar6 == 0 &&
            (iVar6 = (*(code *)param_2[0x32])
                               (param_2 + 0x27,local_18,*(undefined4 *)param_2[0x47],
                                *(undefined4 *)param_2[0x48]), iVar6 == 0)) &&
           (iVar6 = (*(code *)param_2[0x3f])
                              (param_2 + 0x34,local_18,*(undefined4 *)(param_2[0x47] + 4),
                               *(undefined4 *)(param_2[0x48] + 4)), iVar6 == 0)))))) {
        param_2[0x26] = param_2[0x26] + 1;
        goto LAB_00430341;
      }
    }
    else {
      iVar5 = _strcmp(".notdef",*(char **)param_2[0x2d]);
      if ((iVar5 == 0) ||
         ((((iVar6 = (*(code *)param_2[0x4c])
                               (piVar1,0,*(undefined4 *)param_2[0x2d],*(undefined4 *)param_2[0x2e]),
            iVar6 == 0 &&
            (iVar6 = (*(code *)param_2[0x4c])
                               (piVar1,1,*(undefined4 *)param_2[0x3a],*(undefined4 *)param_2[0x3b]),
            iVar6 == 0)) &&
           (((iVar6 = (*(code *)param_2[0x4c])
                                (piVar1,2,*(undefined4 *)(param_2[0x2d] + local_24 * 4),
                                 *(undefined4 *)(param_2[0x2e] + local_24 * 4)), iVar6 == 0 &&
             ((iVar6 = (*(code *)param_2[0x4c])
                                 (piVar1,3,*(undefined4 *)(param_2[0x3a] + local_24 * 4),
                                  *(undefined4 *)(param_2[0x3b] + local_24 * 4)), iVar6 == 0 &&
              (iVar6 = (*(code *)param_2[0x32])
                                 (param_2 + 0x27,local_24,*(undefined4 *)param_2[0x47],
                                  *(undefined4 *)param_2[0x48]), iVar6 == 0)))) &&
            (iVar6 = (*(code *)param_2[0x3f])
                               (param_2 + 0x34,local_24,*(undefined4 *)(param_2[0x47] + 4),
                                *(undefined4 *)(param_2[0x48] + 4)), iVar6 == 0)))) &&
          ((iVar6 = (*(code *)param_2[0x32])
                              (param_2 + 0x27,0,*(undefined4 *)(param_2[0x47] + 8),
                               *(undefined4 *)(param_2[0x48] + 8)), iVar6 == 0 &&
           (iVar6 = (*(code *)param_2[0x3f])
                              (param_2 + 0x34,0,*(undefined4 *)(param_2[0x47] + 0xc),
                               *(undefined4 *)(param_2[0x48] + 0xc)), iVar6 == 0))))))
      goto LAB_00430341;
    }
  }
LAB_0043033e:
  param_2[3] = iVar6;
LAB_00430341:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

