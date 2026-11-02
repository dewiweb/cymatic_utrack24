// rea decompile_all
// name: FUN_004995b6
// address: 0x4995b6
// body: available
// range: 0x4995b6-0x4996e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004995b6(int param_1)

{
  int *in_EAX;
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int unaff_EDI;
  int local_8;
  
  local_8 = 1;
  if (((param_1 != 0) && (unaff_EDI != 0)) && (in_EAX != (int *)0x0)) {
    iVar1 = FUN_004916cf(param_1,*(undefined4 *)(unaff_EDI + 0xf4),0x10);
    if (iVar1 != 0) {
      FUN_00491789(param_1,*(undefined4 *)(unaff_EDI + 0xf4));
      *(uint *)(unaff_EDI + 0xe8) = *(uint *)(unaff_EDI + 0xe8) | 0x20;
      *(int *)(unaff_EDI + 0xf4) = iVar1;
      puVar4 = (undefined4 *)(iVar1 + *(int *)(unaff_EDI + 0xf8) * 0x10);
      do {
        if ((*in_EAX == 0) || (in_EAX[2] == 0)) {
          FUN_004913c4();
        }
        else {
          *(char *)(puVar4 + 1) = (char)in_EAX[1];
          sVar2 = _strlen((char *)*in_EAX);
          pvVar3 = (void *)FUN_0049167e();
          *puVar4 = pvVar3;
          if (pvVar3 == (void *)0x0) break;
          _memcpy(pvVar3,(void *)*in_EAX,sVar2 + 1);
          pvVar3 = (void *)FUN_004916b1(param_1,in_EAX[3]);
          puVar4[2] = pvVar3;
          if (pvVar3 == (void *)0x0) {
            FUN_00491789(param_1,*puVar4);
            break;
          }
          puVar4[3] = in_EAX[3];
          _memcpy(pvVar3,(void *)in_EAX[2],in_EAX[3] * 10);
          *(uint *)(unaff_EDI + 8) = *(uint *)(unaff_EDI + 8) | 0x2000;
          *(int *)(unaff_EDI + 0xf8) = *(int *)(unaff_EDI + 0xf8) + 1;
          puVar4 = puVar4 + 4;
        }
        in_EAX = in_EAX + 4;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
      if (local_8 < 1) {
        return;
      }
    }
    FUN_004914c8(1);
  }
  return;
}

