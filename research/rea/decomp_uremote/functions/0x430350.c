// rea decompile_all
// name: FUN_00430350
// address: 0x430350
// body: available
// range: 0x430350-0x430686 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00430350(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int in_EAX;
  int iVar5;
  undefined1 *puVar6;
  char *_Str;
  size_t sVar7;
  int in_ECX;
  int *in_EDX;
  undefined **ppuVar8;
  size_t _Size;
  byte *pbVar9;
  undefined1 *puVar10;
  byte *local_14;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  pbVar1 = (byte *)(in_EAX + in_ECX);
  local_14 = (byte *)0x0;
  bVar4 = false;
  *in_EDX = in_EAX;
  in_EDX[2] = (int)pbVar1;
  in_EDX[3] = 0;
  (*(code *)in_EDX[7])();
  pbVar9 = (byte *)*in_EDX;
  while (((pbVar9 < pbVar1 &&
          ((pbVar9 = (byte *)*in_EDX, *pbVar9 != 0x65 ||
           (((pbVar9 + 6 != pbVar1 &&
             ((pbVar1 <= pbVar9 + 6 ||
              (((((((bVar2 = pbVar9[5], bVar2 != 0x20 && (bVar2 != 0xd)) && (bVar2 != 10)) &&
                  (((bVar2 != 9 && (bVar2 != 0xc)) &&
                   ((bVar2 != 0 && ((bVar2 != 0x2f && (bVar2 != 0x28)))))))) && (bVar2 != 0x29)) &&
                (((((bVar2 != 0x3c && (bVar2 != 0x3e)) && (bVar2 != 0x5b)) &&
                  ((bVar2 != 0x5d && (bVar2 != 0x7b)))) && (bVar2 != 0x7d)))) && (bVar2 != 0x25)))))
             ) || (iVar5 = _strncmp((char *)pbVar9,"eexec",5), iVar5 != 0)))))) &&
         ((*pbVar9 != 99 ||
          (((pbVar9 + 10 != pbVar1 &&
            ((pbVar1 <= pbVar9 + 10 ||
             ((((bVar2 = pbVar9[9], bVar2 != 0x20 && (bVar2 != 0xd)) &&
               (((bVar2 != 10 && (((bVar2 != 9 && (bVar2 != 0xc)) && (bVar2 != 0)))) &&
                (((bVar2 != 0x2f && (bVar2 != 0x28)) && (bVar2 != 0x29)))))) &&
              (((bVar2 != 0x3c && (bVar2 != 0x3e)) &&
               (((bVar2 != 0x5b && (((bVar2 != 0x5d && (bVar2 != 0x7b)) && (bVar2 != 0x7d)))) &&
                (bVar2 != 0x25)))))))))) ||
           (iVar5 = _strncmp((char *)pbVar9,"closefile",9), iVar5 != 0))))))) {
    if (((*pbVar9 == 0x46) &&
        ((pbVar9 + 0xe == pbVar1 ||
         ((pbVar9 + 0xe < pbVar1 &&
          ((((bVar2 = pbVar9[0xd], bVar2 == 0x20 || (bVar2 == 0xd)) ||
            ((((bVar2 == 10 || ((bVar2 == 9 || (bVar2 == 0xc)))) || (bVar2 == 0)) ||
             (((((bVar2 == 0x2f || (bVar2 == 0x28)) || (bVar2 == 0x29)) ||
               ((bVar2 == 0x3c || (bVar2 == 0x3e)))) ||
              ((bVar2 == 0x5b || ((bVar2 == 0x5d || (bVar2 == 0x7b)))))))))) ||
           ((bVar2 == 0x7d || (bVar2 == 0x25)))))))))) &&
       (iVar5 = _strncmp((char *)pbVar9,"FontDirectory",0xd), iVar5 == 0)) {
      uVar3 = in_EDX[0x5d];
      if ((uVar3 & 1) != 0) {
        in_EDX[0x5d] = uVar3 | 2;
      }
      *in_EDX = *in_EDX + 0xd;
    }
    else {
      bVar2 = *pbVar9;
      if (bVar2 - 0x30 < 10) {
        (*(code *)in_EDX[8])();
        if (in_EDX[3] != 0) break;
        bVar4 = true;
        local_14 = pbVar9;
      }
      else {
        if ((((bVar2 == 0x52) && (pbVar9 + 6 < pbVar1)) && (pbVar9[1] == 0x44)) && (bVar4)) {
          *in_EDX = (int)local_14;
          iVar5 = *(int *)(*(int *)(param_1 + 0x80) + 0x34);
          puVar10 = auStack_10;
          puVar6 = auStack_c;
LAB_0043053c:
          iVar5 = FUN_0042f79b(puVar6,puVar10,iVar5 != 0);
          if (iVar5 == 0) {
            return 3;
          }
        }
        else {
          if (((bVar2 == 0x2d) && (pbVar9 + 6 < pbVar1)) && ((pbVar9[1] == 0x7c && (bVar4)))) {
            *in_EDX = (int)local_14;
            iVar5 = *(int *)(*(int *)(param_1 + 0x80) + 0x34);
            puVar10 = auStack_8;
            puVar6 = auStack_4;
            goto LAB_0043053c;
          }
          if ((bVar2 == 0x2f) && (pbVar9 + 2 < pbVar1)) {
            pbVar9 = pbVar9 + 1;
            *in_EDX = (int)pbVar9;
            (*(code *)in_EDX[8])();
            if (in_EDX[3] != 0) break;
            _Size = *in_EDX - (int)pbVar9;
            if ((_Size - 1 < 0x15) && ((byte *)*in_EDX < pbVar1)) {
              ppuVar8 = &PTR_s_version_0090bf98;
              _Str = "version";
              while ((byte *)_Str != (byte *)0x0) {
                if (((*pbVar9 == *_Str) && (sVar7 = _strlen(_Str), _Size == sVar7)) &&
                   (iVar5 = _memcmp(pbVar9,_Str,_Size), iVar5 == 0)) {
                  if ((((uint)ppuVar8[8] & ((in_EDX[0x5d] & 1U) != 0) + 1) != 0) &&
                     (((in_EDX[0x5d] & 2U) == 0 || (iVar5 = _strcmp(_Str,"CharStrings"), iVar5 == 0)
                      ))) {
                    iVar5 = FUN_0042f6a2(ppuVar8);
                    in_EDX[3] = iVar5;
                    if (iVar5 != 0) {
                      if ((char)iVar5 != -0x5e) {
                        return iVar5;
                      }
                      in_EDX[3] = 0;
                    }
                  }
                  break;
                }
                ppuVar8 = ppuVar8 + 9;
                _Str = *ppuVar8;
              }
            }
          }
          else {
            (*(code *)in_EDX[8])();
            if (in_EDX[3] != 0) break;
          }
        }
        bVar4 = false;
      }
    }
    (*(code *)in_EDX[7])();
    pbVar9 = (byte *)*in_EDX;
  }
  return in_EDX[3];
}

