// rea decompile_all
// name: FUN_00584050
// address: 0x584050
// body: available
// range: 0x584050-0x584a7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00584050(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  undefined4 local_60;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d5ac9;
  local_10 = ExceptionList;
  uVar3 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((int)(param_2 - *param_1) < 0x16) {
    uVar4 = 0;
  }
  else {
    FUN_005813b0(param_1);
    *param_1 = *param_1 + 3 & 0xfffffffc;
    *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    if (((*(uint *)(in_ECX + 0x28) & 0x100) == 0) ||
       (cVar2 = FUN_00596500(in_ECX + 0x38,param_1,param_2,uVar3), cVar2 != '\0')) {
      *param_1 = *param_1 + 3 & 0xfffffffc;
      if ((*(uint *)(in_ECX + 0x28) & 0x800000) != 0) {
        if ((int)(param_2 - *param_1) < 8) {
          ExceptionList = local_10;
          return 0;
        }
        puVar1 = (undefined4 *)*param_1;
        *(undefined4 *)(in_ECX + 0x30) = *puVar1;
        *(undefined4 *)(in_ECX + 0x34) = puVar1[1];
        *param_1 = *param_1 + 8;
      }
      if ((*(uint *)(in_ECX + 0x28) & 0x8000000) != 0) {
        if ((int)(param_2 - *param_1) < 8) {
          ExceptionList = local_10;
          return 0;
        }
        *(undefined2 *)(in_ECX + 0x9a) = *(undefined2 *)*param_1;
        *param_1 = *param_1 + 2;
        *(undefined2 *)(in_ECX + 0x98) = *(undefined2 *)*param_1;
        *param_1 = *param_1 + 2;
        *(undefined2 *)(in_ECX + 0x9c) = *(undefined2 *)*param_1;
        *param_1 = *param_1 + 2;
        *(undefined2 *)(in_ECX + 0x9e) = *(undefined2 *)*param_1;
        *param_1 = *param_1 + 2;
      }
      if ((*(uint *)(in_ECX + 0x28) & 0x1000) != 0) {
        if ((int)(param_2 - *param_1) < 10) {
          ExceptionList = local_10;
          return 0;
        }
        FUN_00507d00(in_ECX + 0x58,param_1);
      }
      *param_1 = *param_1 + 3 & 0xfffffffc;
      if ((*(uint *)(in_ECX + 0x28) & 0x2000) != 0) {
        if ((int)(param_2 - *param_1) < 8) {
          ExceptionList = local_10;
          return 0;
        }
        *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)*param_1;
        *param_1 = *param_1 + 4;
        *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)*param_1;
        *param_1 = *param_1 + 4;
      }
      if ((*(uint *)(in_ECX + 0x28) & 0x4000) != 0) {
        if ((int)(param_2 - *param_1) < 8) {
          ExceptionList = local_10;
          return 0;
        }
        *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)*param_1;
        *param_1 = *param_1 + 4;
        *(undefined4 *)(in_ECX + 0xb0) = *(undefined4 *)*param_1;
        *param_1 = *param_1 + 4;
      }
      if ((*(uint *)(in_ECX + 0x28) & 0x8000) != 0) {
        if ((int)(param_2 - *param_1) < 0xc) {
          ExceptionList = local_10;
          return 0;
        }
        *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)*param_1;
        *param_1 = *param_1 + 4;
        *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)*param_1;
        *param_1 = *param_1 + 4;
        *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)*param_1;
        *param_1 = *param_1 + 4;
      }
      if ((*(uint *)(in_ECX + 0x28) & 0x10000000) != 0) {
        if ((int)(param_2 - *param_1) < 10) {
          ExceptionList = local_10;
          return 0;
        }
        FUN_0056fdc0(in_ECX + 0x88,param_1);
      }
      if ((*(uint *)(in_ECX + 0x28) & 0x20000) != 0) {
        *(undefined2 *)(in_ECX + 0xc0) = *(undefined2 *)*param_1;
        *param_1 = *param_1 + 2;
      }
      if ((*(uint *)(in_ECX + 0x28) & 0x40000) != 0) {
        *(undefined2 *)(in_ECX + 0xc2) = *(undefined2 *)*param_1;
        *param_1 = *param_1 + 2;
      }
      if ((*(uint *)(in_ECX + 0x28) & 0x80000) != 0) {
        *(undefined2 *)(in_ECX + 0xc4) = *(undefined2 *)*param_1;
        *param_1 = *param_1 + 2;
      }
      if ((*(uint *)(in_ECX + 0x28) & 0x100000) != 0) {
        *(undefined2 *)(in_ECX + 0xc6) = *(undefined2 *)*param_1;
        *param_1 = *param_1 + 2;
      }
      if ((*(uint *)(in_ECX + 0x28) & 0x200000) != 0) {
        *(undefined2 *)(in_ECX + 200) = *(undefined2 *)*param_1;
        *param_1 = *param_1 + 2;
      }
      if ((*(uint *)(in_ECX + 0x28) & 0x400000) != 0) {
        *(undefined2 *)(in_ECX + 0xca) = *(undefined2 *)*param_1;
        *param_1 = *param_1 + 2;
      }
      if ((*(uint *)(in_ECX + 0x28) & 0x20000000) != 0) {
        FUN_0056fca0(in_ECX + 0xf4,param_1);
      }
      if (param_2 < *param_1) {
        uVar4 = 0;
      }
      else if (((*(uint *)(in_ECX + 0x28) & 0x200) == 0) ||
              (cVar2 = FUN_00596500(in_ECX + 0x40,param_1,param_2), cVar2 != '\0')) {
        if ((*(uint *)(in_ECX + 0x28) & 0x400) != 0) {
          *param_1 = *param_1 + 1 & 0xfffffffe;
          cVar2 = FUN_00596500(in_ECX + 0x48,param_1,param_2);
          if (cVar2 == '\0') {
            ExceptionList = local_10;
            return 0;
          }
        }
        if ((*(uint *)(in_ECX + 0x28) & 0x800) != 0) {
          *param_1 = *param_1 + 1 & 0xfffffffe;
          cVar2 = FUN_00596500(in_ECX + 0x50,param_1,param_2);
          if (cVar2 == '\0') {
            ExceptionList = local_10;
            return 0;
          }
        }
        *param_1 = *param_1 + 3 & 0xfffffffc;
        if ((*(uint *)(in_ECX + 0x28) & 0x10000) != 0) {
          if ((int)(param_2 - *param_1) < 4) {
            ExceptionList = local_10;
            return 0;
          }
          *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)*param_1;
          *param_1 = *param_1 + 4;
        }
        if ((*(uint *)(in_ECX + 0x28) & 0x1000000) != 0) {
          if ((int)(param_2 - *param_1) < 0xc) {
            ExceptionList = local_10;
            return 0;
          }
          FUN_005498b0(in_ECX + 100,param_1);
        }
        if ((*(uint *)(in_ECX + 0x28) & 0x2000000) != 0) {
          if ((int)(param_2 - *param_1) < 0xc) {
            ExceptionList = local_10;
            return 0;
          }
          FUN_005498b0(in_ECX + 0x70,param_1);
        }
        if ((*(uint *)(in_ECX + 0x28) & 0x4000000) != 0) {
          if ((int)(param_2 - *param_1) < 0xc) {
            ExceptionList = local_10;
            return 0;
          }
          FUN_005498b0(in_ECX + 0x7c,param_1);
        }
        if ((*(uint *)(in_ECX + 0x28) & 0x40000000) != 0) {
          if (param_2 - *param_1 < 2) {
            ExceptionList = local_10;
            return 0;
          }
          *(undefined2 *)(in_ECX + 0xcc) = *(undefined2 *)*param_1;
          *param_1 = *param_1 + 2;
          if ((int)(param_2 - *param_1) < (int)((uint)*(ushort *)(in_ECX + 0xcc) * 2)) {
            ExceptionList = local_10;
            return 0;
          }
          if (*(short *)(in_ECX + 0xcc) != 0) {
            uVar4 = FUN_005b04d6((uint)*(ushort *)(in_ECX + 0xcc) * 2);
            *(undefined4 *)(in_ECX + 0xd8) = uVar4;
            if (*(int *)(in_ECX + 0xd8) == 0) {
              ExceptionList = local_10;
              return 0;
            }
            *(undefined2 *)(in_ECX + 0xd2) = *(undefined2 *)(in_ECX + 0xcc);
            for (local_14 = 0; local_14 < (int)(uint)*(ushort *)(in_ECX + 0xcc);
                local_14 = local_14 + 1) {
              *(undefined2 *)(*(int *)(in_ECX + 0xd8) + local_14 * 2) = *(undefined2 *)*param_1;
              *param_1 = *param_1 + 2;
            }
          }
        }
        if ((*(uint *)(in_ECX + 0x28) & 0x80000000) != 0) {
          if (param_2 - *param_1 < 2) {
            ExceptionList = local_10;
            return 0;
          }
          *(undefined2 *)(in_ECX + 0xce) = *(undefined2 *)*param_1;
          *param_1 = *param_1 + 2;
          if (*(short *)(in_ECX + 0xce) != 0) {
            uVar4 = FUN_005b04d6((uint)*(ushort *)(in_ECX + 0xce) * 4);
            *(undefined4 *)(in_ECX + 0xdc) = uVar4;
            if (*(int *)(in_ECX + 0xdc) == 0) {
              ExceptionList = local_10;
              return 0;
            }
            _memset(*(void **)(in_ECX + 0xdc),0,(uint)*(ushort *)(in_ECX + 0xce) << 2);
            for (local_18 = 0; local_18 < (int)(uint)*(ushort *)(in_ECX + 0xce);
                local_18 = local_18 + 1) {
              iVar5 = FUN_005af82d(8);
              local_8 = 0;
              if (iVar5 == 0) {
                local_60 = 0;
              }
              else {
                local_60 = FUN_005017d0();
              }
              local_8 = 0xffffffff;
              *(undefined4 *)(*(int *)(in_ECX + 0xdc) + local_18 * 4) = local_60;
              if (*(int *)(*(int *)(in_ECX + 0xdc) + local_18 * 4) == 0) {
                ExceptionList = local_10;
                return 0;
              }
              *param_1 = *param_1 + 1 & 0xfffffffe;
              cVar2 = FUN_00596500(*(undefined4 *)(*(int *)(in_ECX + 0xdc) + local_18 * 4),param_1,
                                   param_2);
              if (cVar2 == '\0') {
                ExceptionList = local_10;
                return 0;
              }
            }
          }
        }
        if ((*(uint *)(in_ECX + 0x28) & 0x80) != 0) {
          if (param_2 - *param_1 < 2) {
            ExceptionList = local_10;
            return 0;
          }
          *(undefined2 *)(in_ECX + 0xd0) = *(undefined2 *)*param_1;
          *param_1 = *param_1 + 2;
          if ((int)(param_2 - *param_1) < (int)(uint)*(ushort *)(in_ECX + 0xd0)) {
            ExceptionList = local_10;
            return 0;
          }
          if (*(short *)(in_ECX + 0xd0) != 0) {
            uVar4 = FUN_005b04d6(*(undefined2 *)(in_ECX + 0xd0));
            *(undefined4 *)(in_ECX + 0xe0) = uVar4;
            if (*(int *)(in_ECX + 0xe0) == 0) {
              ExceptionList = local_10;
              return 0;
            }
            *(undefined2 *)(in_ECX + 0xd6) = *(undefined2 *)(in_ECX + 0xd0);
            _memcpy(*(void **)(in_ECX + 0xe0),(void *)*param_1,(uint)*(ushort *)(in_ECX + 0xd0));
            *param_1 = (uint)*(ushort *)(in_ECX + 0xd0) + *param_1;
          }
        }
        if ((*(uint *)(in_ECX + 0x28) & 0x10000) != 0) {
          *param_1 = *param_1 + 1 & 0xfffffffe;
          FUN_00507db0(param_1,param_2);
        }
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  ExceptionList = local_10;
  return uVar4;
}

